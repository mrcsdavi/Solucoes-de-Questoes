/* 14) Escreva uma função que receba um número inteiro positivo n.
 Calcule e retorne o seu fatorial n!: n! = n * (n – 1) * (n – 2) * ... * 1.*/

#include <stdio.h>

int fatorial(int n){
    int fat = 1;

    for(int i = 1; i <= n; i++){
        fat = fat * i;
        printf("%d\n", fat);
    }
    
    if (fat == 0){
        fat = 1;
    }
    
    return fat;
}

int main(){
    int a;

    printf("Digite o fatorial do numero: ");
    scanf("%d", &a);

    printf("Fatorial de %d eh: %d", a, fatorial(a));

    return 0;
}
