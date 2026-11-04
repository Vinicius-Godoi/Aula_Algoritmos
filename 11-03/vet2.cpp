#include<iostream>
#include<vector>
#include<conio.h>

using namespace std;

int main(){
   setlocale(LC_ALL,"PORTUGUESE");

   vector<int> numeros(100);
   
   for(int i = 0; i < numeros.size(); i++){
           //cin >> numeros[i];
           numeros[i] = 1;
           cout << i+1 << " " << numeros[i] << endl;
   }

   cin.ignore();
   getchar();
}
