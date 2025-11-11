/* 2) Escreva um programa que contenha duas variáveis inteiras. Leia essas
 variáveis do teclado. Em seguida, compare seus endereços e exiba o
 conteúdo do maior endereço.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;

    printf("Digite o valor de 'a' e 'b'\n");
    scanf("%d %d", &a, &b);

    if(p1 > p2){
        printf("Conteudo do maior endereco p1: %d", *p1);
    }else{
        printf("Conteudo do maior endereco p2: %d", *p2);
    }

    return 0;
}
