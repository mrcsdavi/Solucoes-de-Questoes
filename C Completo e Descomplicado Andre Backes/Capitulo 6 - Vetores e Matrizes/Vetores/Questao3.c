/* 3) Faça um programa que leia cinco valores e os armazene em um vetor. Em
 seguida, mostre todos os valores lidos juntamente com a média dos valores.*/

#include <stdio.h>

int main(){

    int soma = 0, valores[5];
    float media;
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &valores[i]);
        soma = soma + valores[i];
    }
    printf("Todos os valores lidos: ");
    for(int i = 0; i< 5; i++)
        printf("%d ", valores[i]);
    
    media = soma/5.0;
    printf("Media: %.2f", media);

    return 0;
}
