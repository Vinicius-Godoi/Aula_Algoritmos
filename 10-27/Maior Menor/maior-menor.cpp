/* Construa  um  programa  que  permita  ao  usuário  informar  20  números  inteiros  e,  após  informados, 
mostre qual foi o maior e o menor número digitado */

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int num[20];

    int i = 0;
    do{
        cout << i+1 << "º número: ";
        cin >> num[i];
        i++;
    }while (i < 20);

    system("cls");

    int menor = num[1];
    int maior = num[2];

    for(int i = 0; i < 20; i++){
        if(menor > num[i]){
            menor = num[i];
        }
        if(maior < num[i]){
            maior = num[i];
        }
    }

    cout << maior << " é o maior número." << endl;
    cout << menor << " é o menor número." << endl;

    cin.ignore();
    getchar();
}