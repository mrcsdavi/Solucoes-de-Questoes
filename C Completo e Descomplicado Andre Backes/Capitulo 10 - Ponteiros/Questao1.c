/*1) Escreva um programa que contenha duas variáveis inteiras. Compare seus
 endereços e exiba o maior endereço.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 4;
    int b = 2;

    int *p1, *p2;
    p1 = &a;
    p2 = &b;

    if(p1 > p2)
        printf("O endereco de p1 eh maior do que o de p2");
    else
        printf("O endereço de p2 eh maior que o de p1");

    return 0;
}
