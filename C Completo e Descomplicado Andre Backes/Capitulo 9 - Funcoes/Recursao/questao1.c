/* 1) Escreva uma função recursiva que calcule a soma dos
 primeiros n cubos:*/

#include <stdio.h>
#include <math.h>

int somaCubos(int n){
    if(n == 0){
        return 0;
    }else{
        return pow(n, 3)+somaCubos(n-1);
    }
}

int main(){
    int a;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Soma resultante: %d", somaCubos(a));


    return 0;
}
