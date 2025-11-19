/*4) Elabore um programa que leia do usuário o tamanho de um vetor a ser
 lido. Em seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor
 do usuário e o imprima.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    p = (int*) malloc(N*sizeof(int));

    for(int i = 0; i < N; i++){
        scanf("%d", &p[i]);
    }

    for(int i = 0; i < N; i++){
        printf("%d\n", p[i]);
    }

    return 0;
 }
