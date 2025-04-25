/* 1) Crie um programa que leia do teclado seis valores inteiros e em seguida
 mostre na tela os valores lidos*/

#include <stdio.h>

int main(){
    
    int num[6];

    for(int i = 0; i < 6; i++)
        scanf("%d", &num[i]);

    printf("Valores lido do teclado: ");

   for(int i = 0; i < 6; i++)
        printf("%d ", num[i]);

    return 0;
}
