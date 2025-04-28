/* 1) Faça um programa que leia uma string e a imprima na tela.*/

#include <stdio.h>

int main(){

    char str[10];

    gets(str);

    printf("String digitada: %s\n", str);
    

    return 0;
}
