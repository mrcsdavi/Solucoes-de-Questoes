/*9) Crie uma função que receba como parâmetro um vetor e o imprima. Não
 utilize índices para percorrer o vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>

void funcao(int *p, int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &*(p+i));   
    }
}

int main(){
    int arr[5];
    int *p = arr;

    funcao(p, 5);

    for(int i = 0; i < 5; i++){
        printf("%d ", *(p+i));
    }

    return 0;
}
