/*19) Elabore um programa que leia dois números inteiros e exiba o
 resultado das operações de “ou exclusivo”, “ou bit a bit” e “e
 bit a bit” entre eles*/

#include <stdio.h>

int main(){

    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int ouExc = a ^ b; 
    int ou = a | b;
    int e = a & b;


    printf("Ou exclusivo: %d\nOu bit a bit: %d\nE bit a bit %d", ouExc, ou, e);

    return 0;
}
