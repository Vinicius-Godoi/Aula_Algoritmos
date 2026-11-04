/* Faça um algoritmo para calcular o valor da conta de energia elétrica de uma casa, considerando a 
tabela a seguir. A conta deve ser calculada proporcionalmente, ou seja, se o usuário gastou 95 KHW, 
ele pagará 50 KWH ao preço de R$ 2,00 cada Kwh e mais 45 Kwh ao preço de R$ 2,30 cada Kwh, 
totalizando R$ 203,50. 
 
                                            KWH         R$ - cada Kwh 
                                        0   até   50        2,00 
                                        51  até  100        2,30 
                                        101 até  150        2,60 
                                        Acima de 150        3,00
*/

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int rpt = 1;
    
    while(rpt == 1){
        system("cls");
        double kwh = 0;
    
        cout << "Informe os Kwh gastos: ";
        cin >> kwh;

        double conta = 0;

        if(kwh <= 50){
        conta += kwh * 2;
        }
        else if (kwh >= 51 && kwh <= 100){
            kwh -= 50;

            conta += 50 * 2;
            conta += kwh * 2.3;
        }
        else if (kwh >= 101 && kwh <= 150){
            kwh -= 100;

            conta += 50 * 2;
            conta += 50 * 2.3;
            conta += kwh * 2.6;
        }
        else if (kwh > 150){
            kwh -= 150;

            conta += 50 * 2;
            conta += 50 * 2.3;
            conta += 50 * 2.6;
            conta += kwh * 3;
        }

        cout << "Valor da conta: R$" << conta;
        
        cin.ignore();
        getchar();

        system("cls");

        
        cout << "Repetir = 1";
        cin >> rpt;
    }
    
}