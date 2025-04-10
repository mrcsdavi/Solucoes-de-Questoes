/* 18) Elabore um programa que leia dois números inteiros e exiba o
 deslocamento, à esquerda e à direita, do primeiro número pelo
 segundo */

#include <stdio.h>

int main(){

    int a, b;

    scanf("%d %d", &a, &b);
    
    int esq = a << b;
    int dir = b >> a;

    printf("%d << %d = %d ", a, b, esq);
    printf("%d >> %d = %d", b, a, dir);
    return 0;
}
