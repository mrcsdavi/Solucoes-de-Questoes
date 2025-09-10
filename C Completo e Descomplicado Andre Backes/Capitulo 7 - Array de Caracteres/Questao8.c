/*8) Construa um programa que leia duas strings do teclado. Imprima uma
 mensagem informando se a segunda string lida está contida dentro da
 primeira.*/

#include <stdio.h>
#include <string.h>

int main(){
    char str1[50];
    char str2[50];
    printf("Digite a primeira string: ");
    gets(str1);
    printf("Digite a segunda string: ");
    gets(str2);

    if(strcmp(str1, str2) == 0) printf("Esta contida");
    else printf("Nao esta contida");

    return 0;
}
