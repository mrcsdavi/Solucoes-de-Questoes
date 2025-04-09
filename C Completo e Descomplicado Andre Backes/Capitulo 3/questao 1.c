// 1) Faça um programa que leia um número inteiro e retorne seu
// antecessor e seu sucessor.

#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    printf("Antecessor: %d\n", num - 1);

    printf("Sucessor: %d", num + 1);

    return 0;
}
