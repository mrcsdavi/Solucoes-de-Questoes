/*3) Sem usar a função strlen(), faça um programa que leia uma string e
 imprima quantos caracteres ela possui*/
#include <stdio.h>
#include <string.h>

int main(){

    char str[10];

    int qtdChar = 0;

    printf("Digite uma string: ");
    gets(str);

    for(int i = 0; i < 10; i++){
        if(str[i] != '\0'){
            qtdChar++;
        }
        else{
            break;
        }
    }
    
    printf("Quantidade de caracteres da string digitada: %d", qtdChar);
    return 0;
}
