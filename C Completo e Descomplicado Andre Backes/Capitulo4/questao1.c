/*1) Faça um programa que leia dois números e mostre qual deles
 é o maior.*/

#include <stdio.h>

int main(){

    int num1, num2;

    scanf("%d %d", &num1, &num2);
    
    if (num1 > num2)
        printf("%d e maior que %d", num1, num2);
    else
        printf("%d e menor que %d", num1, num2);

    return 0;
}
