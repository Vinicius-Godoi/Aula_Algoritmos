/* Faça um algoritmo para encher um vetor de inteiro de 100 elementos 
   e calcular as seguintes informações: 
   - A média de números;
   - A média dos números pares;
   - A média dos números ímpares;
   - A quantidade de números pares;
   - A quantidade de números ímpares.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
   setlocale(LC_ALL,"PORTUGUESE");

   int vetor[100];
   float media_n = 0, media_p = 0, media_i = 0;
   int qtd_p = 0, qtd_i = 0;
   
   for(int i = 0; i < 100; i++){
           vetor[i] = i+1;
           cout << i+1 << ": " << vetor[i] << endl;
           
           media_n += vetor[i];
           
           if(vetor[i]%2 == 0){
                qtd_p++;
                media_p += vetor[i];
           }
           else{
                qtd_i++;
                media_i += vetor[i];
           }
   }
   
   cout << "Média dos números: " << media_n / 100 << endl;
   cout << "Quantidade dos números pares: " << qtd_p << endl;
   cout << "Média dos números pares: " << media_p / qtd_p << endl;
   cout << "Quantidade dos números ímpares: " << qtd_i << endl;
   cout << "Média dos números ímpares: " << media_i / qtd_i << endl;
   
   

   getch();
}
