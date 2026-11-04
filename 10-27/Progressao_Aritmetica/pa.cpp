#include <iostream>
#include <windows.h>

using namespace std;



int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int i = 0, r = 0, t = 1;

    cout << "Início: ";
    cin >> i;
    cout << "Razão: ";
    cin >> r;
    cout << "Termo: ";
    cin >> t;

    for(int x = 1; x < t; x++){
        cout << i << endl;

        i += r;
    }

    cout << i;
    
    cin.ignore();
    getchar();
}