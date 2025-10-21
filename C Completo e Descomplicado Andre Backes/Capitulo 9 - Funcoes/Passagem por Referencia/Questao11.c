/* 11) Escreva uma função que receba uma string e converta todos
 os seus caracteres em maiúscula. Dica: subtraia 32 dos
 caracteres cujo código ASCII está entre 97 e 122*/

#include <stdio.h>
#include <string.h>

void converterMaisc(char *str){
    int n = strlen(str);

    for(int i = 0; i < n; i++){
        if(str[i] >= 97 && str[i] <= 122){
            str[i] = str[i] - 32;
        }
    }

}

int main(){
    char string[20];

    gets(string);
    setbuf(stdin, NULL);

    converterMaisc(string);

    printf("%s", string);

    return 0;
}
