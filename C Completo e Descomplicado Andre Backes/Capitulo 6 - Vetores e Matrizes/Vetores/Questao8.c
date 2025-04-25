/*8) Faça um programa que preencha um vetor com 10 números reais. Em
 seguida, calcule e mostre na tela a quantidade de números negativos e a
 soma dos números positivos desse vetor*/

#include <stdio.h>

int main(){

    int qtdPositivo = 0;
    int qtdNegativo = 0;
    float vetor[10];

    for(int i = 0; i < 10; i++){
        scanf("%f", &vetor[i]);
        if(vetor[i] < 0)
            qtdNegativo++;
        if(vetor[i] > 0)
            qtdPositivo++;
    }
    
    printf("Qtd de numeros positivos: %d\n", qtdPositivo);
    printf("Qtd de numeros negativos: %d\n", qtdNegativo);


    return 0;
}
