/*11) Escreva um programa que leia uma string do teclado e converta todos os
 seus caracteres em minúscula. Dica: some 32 dos caracteres cujo código
 ASCII está entre 65 e 90*/

#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    printf("Digite a string: ");
    fgets(str, 50, stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }

    printf("%s", str);

    return 0;
}
