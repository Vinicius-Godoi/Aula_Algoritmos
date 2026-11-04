/* Cire 2 vetores int (vet1 e vet2), cada qual com 10 elementos.
   - Efetue a entrada dos elementos nos vetores;
   - Mostre os elementos dos 2 vetores;
   - Faça a troca dos elementos dos vetores, de forma que o primeiro elemento 
     de vet1 seja trocado com o primeirop elemento de vet2 e assim por diante.
   - Mostre os elementos dos vetores. */

#include<iostream>
#include<vector>
#include<conio.h>

using namespace std;

int main(){
   setlocale(LC_ALL,"PORTUGUESE");
   
   int vet1[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
   int vet2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
   int troca = 0;
   
   for(int i = 0; i < 10; i++){           
           troca = vet1[i];
           vet1[i] = vet2[i];
           vet2[i] = troca;
   }
   
   cout << " vet1 ====== vet2\n" << endl;
   
   for(int i = 0; i < 10; i++){ 
           cout << "  "<< vet1[i] <<" ====== " << vet2[i] << endl;
   } 

   cin.ignore();
   getchar();
}
