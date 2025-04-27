/* 11) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e
 imprima a soma dos elementos dessa matriz que estão acima da diagonal
 principal.*/

 #include <stdio.h>

 int main(){

    int soma = 0, matriz[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            scanf("%d", &matriz[i][j]);
    }

    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 5; j++){
            if(i == j)
                soma = soma + matriz[i-1][j];
        }
    }

    printf("Soma = %d", soma);

    return 0;
 }
