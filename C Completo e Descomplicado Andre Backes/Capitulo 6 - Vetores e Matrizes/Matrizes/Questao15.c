/* 15) Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida,
 calcule e imprima a matriz B, sendo que B = A^2.*/

#include <stdio.h>

int main(){

    int A[5][5], B[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            scanf("%d", &A[i][j]);
    }

    for(int i = 0; i < 5; i++){
        printf("{ ");
        for(int j = 0; j < 5; j++){
            B[i][j] = A[i][j]*A[i][j];
            printf("%4d ", B[i][j]);

        }
        printf(" }\n");
    }



    return 0;
}
