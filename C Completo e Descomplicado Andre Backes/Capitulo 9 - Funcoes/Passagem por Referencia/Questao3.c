/* 3) Escreva uma função que receba um array de 10 elementos e
 retorne a sua soma*/

#include <stdio.h>

void soma(int *v, int n, int *soma){
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
        *soma = *soma + v[i];
    }
}


int main(){
    int a[10];
    int s = 0;
    soma(a, 10, &s);

    printf("A soma eh: %d", s);

    return 0;
}
