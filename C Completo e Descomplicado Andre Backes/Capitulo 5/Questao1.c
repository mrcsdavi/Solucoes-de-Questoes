/*1) Faça um programa que leia um número inteiro positivo N e
 imprima todos os números naturais de 0 até N em ordem
 crescente.*/

 #include <stdio.h>

 int main(){

    int N;
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &N);

    if(N > 0){
        for(int i = 0; i <= N; i++) printf("%d\n", i);
    }

    return 0;
 }
