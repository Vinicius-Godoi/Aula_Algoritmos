#include<iostream>
#include<vector>
#include<conio.h>

using namespace std;

int main(){
   setlocale(LC_ALL,"PORTUGUESE");
   vector<int> nota(4);
   float media = 0;
   
   for (int i = 0; i < nota.size(); i++){
       system("cls");
       cout << "Informe a nota " << i+1 << ": ";
       cin >> nota[i];
       media += nota[i];
   }
   system("cls");
   
   for(int i = 0; i < nota.size(); i++){
           cout << "Nota " << i+1 << ": " << nota[i] << endl;
   } 
   cout << "Média: " << media/nota.size();
   

   getch();
}
