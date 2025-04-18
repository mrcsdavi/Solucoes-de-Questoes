/* 8) Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>

int main(){

    int num, media, soma = 0;

    int i = 1;
    printf("Digite 10 numeros: \n");
    while(i <= 10){
        scanf("%d", &num);
        soma = soma + num;
        if(i == 10) media = soma/i; 
        i++;
    }

    printf("%d", media);

    return 0;
}
