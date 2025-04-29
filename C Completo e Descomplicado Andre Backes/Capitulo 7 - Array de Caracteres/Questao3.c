/*3) Sem usar a função strlen(), faça um programa que leia uma string e
 imprima quantos caracteres ela possui.*/

 #include <stdio.h>
#include <string.h>

 int main(){

    char str[20];

    fgets(str, 20, stdin);

    printf("A string: ");
    fputs(str, stdout);
    printf(" contem: %d caracteres.", strlen(str)-1);
    
    return 0;
 }
