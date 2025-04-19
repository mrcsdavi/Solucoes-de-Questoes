/* 11) Faça um algoritmo que leia um número positivo e imprima
 seus divisores. Exemplo: Os divisores do número 66 são: 1, 2,
 3, 6, 11, 22, 33 e 66. */

#include <stdio.h>

 int main(){

   int num, divide;

   scanf("%d", &num);

   if(num > 0){
      for(int i = 1; i <= num; i++){
         divide = num/i;
         if(num/i && num % i == 0)
            printf("%d ", divide);
         }
      }

    return 0;
}
