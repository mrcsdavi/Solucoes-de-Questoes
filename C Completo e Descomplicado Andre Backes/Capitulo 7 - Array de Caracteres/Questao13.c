/* 13) Escreva um programa que recebe uma string S e dois valores inteiros não
 negativos i e j. Em seguida, imprima os caracteres contidos no segmento
 que vai de i a j da string S.*/

#include <stdio.h>
#include <string.h>

int main(){

    char string[50];
    int i, j;

    printf("Digte a string: ");
    fgets(string, 50, stdin);
    printf("Digite o valor de 'i': ");
    scanf("%d", &i);
    printf("Digite o valor de 'j': ");
    scanf("%d", &j);

    if(i >= 0 && j >= 0 && i < j){
        while(i <= j){
            
            printf("%c", string[i]);
            i++;
        }
    }

    return 0;
}
