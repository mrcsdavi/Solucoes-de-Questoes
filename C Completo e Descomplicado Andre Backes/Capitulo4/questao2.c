/*2) Faça um programa que leia dois números e mostre o maior
deles. Se, por acaso, os dois números forem iguais, imprima a
mensagem “Números iguais”.*/

#include <Stdio.h>

int main(){

    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
        printf("%d e maior que %d", num1, num2);
    else if(num1 < num2)
        printf("%d e maior que %d", num2, num1);
    else
        printf("Numeros iguais");

    return 0;
}
