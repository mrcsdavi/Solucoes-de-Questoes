/*  14) Faça um programa que converta uma letra maiúscula em
 letra minúscula. Use a tabela ASCII para isso.
*/

#include <stdio.h>

int main(){

    char maiuscula;
    char minuscula;

    printf("Digite uma letra maiuscula: \n");
    
    scanf("%c", &maiuscula);
    minuscula = maiuscula + 32; 

    printf("%c", minuscula);


    return 0;
}
