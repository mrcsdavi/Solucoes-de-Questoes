/*8) Faça uma função que receba, por parâmetro, uma matriz A
 contendo seis linhas e seis colunas. Essa função deve retornar,
 por referência, a soma dos elementos da sua diagonal principal
 e da sua diagonal secundária.*/

#include <stdio.h>

void somaDiagonais(int v[][3], int n, int *soma){

    //diag principal    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                *soma = *soma + v[i][j];
            }
            if(i + j == n - 1){
                *soma = *soma + v[i][j];
            }
        }
        printf("\n");
    }
}

int main(){
    int mA[3][3];
    int s = 0;

    printf("Digite os valores da matriz A: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &mA[i][j]);
        }
    }
    
    somaDiagonais(mA, 3, &s);

    printf("soma da diagonal principal: %d", s);



    return 0;
}
