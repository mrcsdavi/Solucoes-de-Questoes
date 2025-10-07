/* 17) Faça uma função que receba um inteiro N como parâmetro.
 Calcule e retorne o resultado da seguinte série S:*/

#include <stdio.h>

float resultadoSerie(int n){
    float S = 0.0;
    for(int i = 1; i <= n; i++){
        S =  S + (float) (i*i+1)/(i+3); 
    }

    return S;
}

int main(){
    int a;

    printf("Digite um numero para N valores para obter o resultado: ");
    scanf("%d", &a);

    printf("Resultado da serie eh: %.2f", resultadoSerie(a));


    return 0;
}
