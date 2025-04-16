/*14) Faça um programa para verificar se determinado número
inteiro lido é divisível por 3 ou 5, mas não simultaneamente
pelos dois.*/

#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 != 0)
        printf("%d eh divisivel por 3", num);
    else if(num % 3 != 0 && num % 5 == 0)
        printf("%d eh divisivel por 5", num);
    else if(num % 3 == 0 && num % 5 == 0)
        printf("O numero %d nao pode ser divisivel por 3 e 5 ao mesmo tempo\n", num);
    else
        printf("O numero %d nao eh divisivel nem por 3 e nem por 5.\n", num);

    return 0;
}
