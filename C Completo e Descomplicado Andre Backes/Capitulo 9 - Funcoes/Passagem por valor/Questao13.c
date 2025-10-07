/* 13) Escreva uma função que receba um número inteiro positivo n.
 Calcule e retorne o somatório de 1 até n: 1 + 2 + 3 + ... + n*/

#include <stdio.h>

int somatorio(int n){
    int soma = 0;
    for(int i = 1; i <= n; i++){
        soma = soma + i;
    }
    return soma;
}

int main(){
    int a;

    printf("Digite um numero para realizar o somatorio até n: ");
    scanf("%d", &a);

    printf("Somatorio resultou em: %d", somatorio(a));

    return 0;
}
