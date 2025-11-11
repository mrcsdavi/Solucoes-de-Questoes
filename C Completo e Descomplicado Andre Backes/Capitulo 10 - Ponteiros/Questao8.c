/* 8) Crie uma função que receba dois parâmetros: um vetor e um valor do
 mesmo tipo do vetor. A função deverá preencher os elementos de vetor
 com esse valor. Não utilize índices para percorrer o vetor, apenas aritmética
 de ponteiros.*/

#include <stdio.h>

void funcao(int *p, int valor){
    for(int i = 0; i < 5; i++)
        *(p+i) = valor;
}

 int main(){
    int arr[5];
    int v;

    int *p = arr;
    
    printf("Digite um valor: ");
    scanf("%d", &v);

    funcao(p, v);

    for(int i = 0; i < 5; i++){
        printf("%d ", *(p+i));
    }
    
    return 0;
 }
