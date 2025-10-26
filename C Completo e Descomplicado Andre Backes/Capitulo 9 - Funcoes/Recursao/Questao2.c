/* 2) Crie uma função recursiva que receba um número inteiro N e
 retorne o somatório dos números de 1 a N.*/

#include <stdio.h>

int somatorio(int a){
    if(a == 0)
        return 0;
    else
        return a+somatorio(a-1);
}

int main(){
    int a;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Soma: %d", somatorio(a));

    return 0;
}
