/* Anacleto  tem  1,50m  e  cresce  2,4  centímetros  por  ano,  enquanto  Felisberto  tem  1,10m  e  cresce  3 
milímetros  por  mês.  Construa  um  programa  que  calcule  e  apresente  quantos  anos  serão  necessários 
para que Felisberto seja maior que Anacleto. */

#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int anacleto_mm = 1500, felisberto_mm = 1100;
    int mes = 0;

    while(felisberto_mm <= anacleto_mm){
        mes++;
        felisberto_mm += 3;
        
        if(mes > 0 && mes % 12 == 0){
            anacleto_mm += 24;
        }

        
    }

    double anacleto_m = anacleto_mm / 1000.0;
    double felisberto_m = felisberto_mm / 1000.0;

    cout << fixed << setprecision(3);
    cout << "======= ALTURA FINAL =======" << endl;
    cout << "Anacleto: " << anacleto_m << endl;
    cout << "Felisberto: " << felisberto_m << endl;
    cout << "Tempo necessário: " << mes/12 << " anos e " << mes%12 << " meses.";


    cin.ignore();
    getchar();
}