/*3) Faça um programa que leia um número inteiro N e depois
 imprima os N primeiros números naturais ímpares.*/

#include <stdio.h>

 int main(){

   int N;
   scanf("%d", &N);

   for(int i=0; i <= N ;i++){
      if(i % 2 != 0){
         printf("%d ", i);
      }
   }
   
    return 0;
 }
