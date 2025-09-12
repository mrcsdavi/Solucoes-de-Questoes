/*15) Escreva um programa que leia duas strings e as imprima em ordem
alfabética, a ordem em que elas apareceriam em um dicionário.
*/

#include <stdio.h>
#include <string.h>

int main(){

    char str1[50];
    char str2[50];

    printf("Digite duas string: ");
    gets(str1);
    gets(str2);

    if(strcmp(str1, str2) < 0){
        printf("%s\n%s\n", str1, str2);
    }else{
        printf("%s\n%s\n", str2, str1);
    }


    return 0;
}
