/* 2) Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela
 o maior valor contido nessa matriz e a sua localização (linha e coluna)*/

 #include <stdio.h>

 int main(){
   
   int matriz[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0}};

   int maior = matriz[0][0];

   for(int i = 0; i < 4; i++){
      for(int j = 0; j < 4; j++){
         scanf("%d", &matriz[i][j]);
         if(maior < matriz[i][j])
            maior = matriz[i][j];

      }
      
   }
   for(int i = 0; i < 4; i++){
      for(int j = 0; j < 4; j++){
         if(maior == matriz[i][j]){
            printf("Maior valor: %d; Sua localizacao eh: [%d][%d]", maior, i, j);
         }
      }
   }
   

    return 0;
 }
