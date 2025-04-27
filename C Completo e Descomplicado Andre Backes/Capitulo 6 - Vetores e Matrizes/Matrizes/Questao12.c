/*12) Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e
 imprima a soma dos elementos dessa matriz que estão abaixo da diagonal
 principal.*/

 #include <stdio.h>

 int main(){

    int soma = 0, matriz[6][6];

   for(int i = 0; i < 6; i++){
      for(int j = 0; j < 6; j++){
         scanf("%d", &matriz[i][j]);      
      }
      
   }

   for(int i = 0; i < 6; i++){
      for(int j = 0; j < 6; j++){
         if((i == 1 && j == 0) || (i == 2 && j == 1) || (i == 3 && j == 2) || (i == 4 && j == 3) || (i == 5 && j == 4))
            soma += matriz[i][j];
      }
   }
   printf("Soma = %d\n", soma);

    return 0;
 }
