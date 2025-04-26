/*1) Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela
 o menor valor contido nessa matriz.*/

 #include <stdio.h>

 int main(){

    int menor, matriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]); 
            if(menor > matriz[i][j]){
                menor = matriz[i][j];
            }
        }
    }

    printf("Menor: %d\n", menor);

    return 0;
 }
