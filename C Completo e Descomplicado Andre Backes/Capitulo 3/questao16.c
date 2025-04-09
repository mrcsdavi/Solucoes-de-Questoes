/* 16) Escreva um programa que leia um número inteiro e mostre a
 multiplicação e a divisão desse número por dois (utilize os
 operadores de deslocamento de bits). */

#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    printf("multiplicao: %d\n", (num << 2)); //  multiplica por 2 duas vezes
    printf("divisao: %d\n", (num >> 2)); // divide por 2 duas vezes

    return 0;
}
