/*3) Crie uma função recursiva que receba um número inteiro N e
 imprima todos os números naturais de 0 até N em ordem
 crescente.*/

#include <stdio.h>

void numNaturais(int N){
    if(N == 0){
        printf("%d ", N);
    }else{
        numNaturais(N-1);
        printf("%d ", N);
    }
}

int main(){
    int a;

    printf("Digite um numero: ");
    scanf("%d", &a);

    numNaturais(a);

    return 0;
}
