/* 7) Crie uma função que receba uma matriz A contendo 10 linhas
 e 10 colunas e retorne a soma dos seus elementos*/

#include <stdio.h>

void somaFunc(int A[][10], int n, int *s){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            *s = *s + A[i][j];
    }

}

int main(){
    int mA[10][10];
    int soma = 0;

    printf("Digite os elementos do vetor: ");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            scanf("%d", &mA[i][j]);
    }

    somaFunc(mA, 10, &soma);

    printf("Somatorio: %d", soma);




    return 0;
}
