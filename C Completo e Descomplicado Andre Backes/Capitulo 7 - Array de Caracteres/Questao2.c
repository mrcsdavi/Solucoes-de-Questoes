/*2) Faça um programa que leia uma string e imprima as quatro primeiras
 letras dela.*/

#include <stdio.h>

int main(){

    char str[10];

    gets(str);

    for(int i = 0; i < 4; i++)
        printf("%c", str[i]);

    return 0;
}
