// 1) Faça um programa que leia um número inteiro e retorne seu
// antecessor e seu sucessor.

#include <stdio.h>

int main(){

    int num, ant, sucs;
    scanf("%d", &num);

    num = (ant = num -1, sucs = num +1);

    printf("Antecessor: %d\n", ant);

    printf("Sucessor: %d", sucs);

    return 0;
}
