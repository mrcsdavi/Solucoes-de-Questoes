/*4) Crie uma função recursiva que receba um número inteiro N e
 imprima todos os números naturais de 0 até N em ordem
 decrescente.*/

#include <stdio.h>

void descres(int N){
    if(N == 0){
        printf("%d ", N);
    }else{
        printf("%d ", N);
        descres(N-1);
    }
    
}

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    descres(n);

    return 0;
}
