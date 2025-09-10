/* 7) Faça um programa que leia uma string e imprima uma mensagem dizendo
 se ela é um palíndromo ou não. Um palíndromo é uma palavra que tem a
 propriedade de poder ser lida tanto da direita para a esquerda como da
 esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc*/

#include <stdio.h>
#include <string.h>

int main(){
    char str1[50];
    char strInvert[50];

    printf("Digite uma string: ");
    gets(str1);

    int tras;
    int j = 0;
    for(int i = 0; i < 50; i++){
        if(str1[i] == '\0'){
            tras = i;
            strInvert[tras] = '\0';
            tras = tras - 1;
            break;
        }
    }

    while(tras > -1){
        strInvert[j] = str1[tras];
        if(strInvert[j] == '\0') break;
        tras--;
        j++;
    }

    printf("string1: %s\n", str1);
    printf("string2: %s\n", strInvert);

    printf("eh palindromo? \n");
    if(strcmp(strInvert, str1) == 0)
        printf("Sim!");
    else
        printf("Não.");
    

    return 0;
}
