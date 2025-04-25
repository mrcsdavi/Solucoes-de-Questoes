/* 7) Faça um programa que receba do usuário um vetor X com 10 posições. Em
 seguida deverão ser impressos o maior e o menor elemento desse vetor*/

 #include <stdio.h>
 
 int main(){

   int maior, menor, vetor[10];

   for(int i = 0; i < 10; i++)
      scanf("%d", &vetor[i]);

   maior = vetor[0];
   menor = vetor[0];

   for(int i = 0; i < 10; i++){
      if(maior < vetor[i])
         maior = vetor[i];
      else if(menor > vetor[i])
         menor = vetor[i];
   }
   

   printf("Maior = %d\n", maior);
   printf("Menor = %d\n", menor);

   

    return 0;
 }
