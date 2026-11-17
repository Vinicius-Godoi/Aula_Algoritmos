/* Sistema de notas simplificado que deve permitir:
 • receber nome do aluno;
 • receber três notas;
 • calcular a média;
 • informar se foi aprovado, considerando a média 7 como corte;
 • apresentar uma mensagem adequada */

#include <iostream>
#include <string>
#include <iomanip>

#ifdef _WIN32
    #include <windows.h>
#endif

using namespace std;

string definirSituacao(double media){
    if(media >= 7){
        return "Aprovado!";   
    }
    else{
        return "Reprovado!";
    }
}

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);
    #endif
    
    string nome;
    double notas[3];
    double soma = 0;

    while(true){
        cout << "Nome do aluno:";
        getline(cin, nome);

        if(nome.empty()){
            system("cls");

            cout << "[Nome inválido!]";

            getchar();
            system("cls");
            continue;
        }
        break;
    }
    

    for(int i = 0; i < 3; i++){
        system("cls");

        cout << i + 1 << "ª nota: ";

        while(true){
            if(cin >> notas[i] && notas[i] >= 0 && notas[i] <=10){
                break;
            }

            cout << "[Valor Inválido]";

            cin.ignore();
            getchar();

            system("cls");

            cout << i + 1 << "ª nota: ";

            cin.clear();
            cin.ignore(10000, '\n');
        }

        soma += notas[i];
    }

    double media = soma / 3;
    

    system("cls");

    cout << fixed << setprecision(1);
    cout << "Aluno(a): " << nome << endl;
    cout << "1ª Nota: " << notas[0] << " | 2ª Nota: " << notas[1] << " | 3ª Nota: " << notas[2] << endl;
    cout << "Média final: " << media << endl;
    cout << "Situação: " << definirSituacao(media);


    cin.ignore();
    getchar();
}