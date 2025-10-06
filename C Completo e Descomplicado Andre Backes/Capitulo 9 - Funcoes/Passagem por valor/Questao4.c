/*4) Escreva uma função que receba por parâmetro a altura e o raio
 de um cilindro circular e retorne o volume desse cilindro. O
 volume de um cilindro circular é calculado por meio da
 seguinte fórmula:*/

#include <stdio.h>

float cilindro(float a, float r){
    const float pi = 3.1414592;
    return pi*(r*r)*a;
}

int main(){
    float a, b;

    printf("Digite a altura e o raio dessa circuferencia: ");
    scanf("%f %f", &a, &b);

    printf("O volume do cilindro eh: %.2f", cilindro(a, b));

    return 0;
}
