/* 17) Escreva um programa que leia um número inteiro e mostre o
 seu complemento bit a bit.*/

 #include <stdio.h>


 int main(){

    int num;

    scanf("%d", &num);
    
    int complemento = ~num;
    
    printf("%d", complemento);

    return 0;
 }
