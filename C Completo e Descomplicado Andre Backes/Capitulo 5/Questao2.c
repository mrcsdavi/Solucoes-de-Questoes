/*2) Faça um programa que leia um número inteiro positivo N e
imprima todos os números naturais de 0 até N em ordem
decrescente*/

#include <stdio.h>

int main(){

    int N;

    scanf("%d", &N);

    if(N > 0){
        int i = 0;
        while(i <= N){
            printf("%d\n", N);
            N--;
        }
    }

    return 0;
}
