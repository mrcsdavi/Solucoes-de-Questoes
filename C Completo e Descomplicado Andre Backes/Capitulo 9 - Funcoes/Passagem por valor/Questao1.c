/* 1) Escreva uma função que receba por parâmetro dois números e
 retorne o maior deles.*/

#include <stdio.h>

int maior(int a, int b){
    if(a > b) return a;
    else return b;
}

int main(){
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("Maior numero é o: %d", maior(x,y));

    return 0;
}
