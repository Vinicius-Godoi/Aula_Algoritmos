/* Faça um algoritmo para ler dois vetores (a e b) com 5 posições
   (inteiro) cada e, em seguida, efetuar a troca entre seus valores 
   de maneira que o valor da última posição do vetor A seja trocado 
   com o valor da primeira posição de B*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
   setlocale(LC_ALL,"PORTUGUESE");
   int a[5] = {1, 3, 5, 7, 9};
   int b[5] = {2, 4, 6, 8, 10};
   int troca = 0;
   
   cout << "Antes da Troca" << endl;
   for(int i = 0; i < 5; i++){
      cout << "A: " << a[i] << endl;
   }
   cout << endl;
   for(int i = 0; i < 5; i++){
      cout << "B: " << b[i] << endl;
   }
   
   // Troca
   for(int i = 0; i < 5; i++){        
           troca = a[i];
           a[i] = b[4 - i];
           b[4 - i] = troca;
   }
   
   cout << "Depois da troca" << endl;
   for(int i = 0; i < 5; i++){
      cout << "A: " << a[i] << endl;
   }
   cout << endl;
   for(int i = 0; i < 5; i++){
      cout << "B: " << b[i] << endl;
   }
   
   
   getch();
}
