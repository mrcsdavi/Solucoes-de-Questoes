/* 6) Escreva uma função que receba o peso (quilos) e a altura (metros) de uma
 pessoa. Calcule e retorne o IMC (Índice de Massa Corporal) dessa pessoa*/

#include <stdio.h>

struct pessoa{
    float peso;
    float altura;
};

typedef struct pessoa p;

float Calc_IMC(float peso, float altura){
    return peso/(altura*altura);
}

int main(){
    p p1;

    printf("Digite o seu peso e a sua altura: ");
    scanf("%f %f", &p1.peso, &p1.altura);
    
    printf("Calculo do IMC eh: %.2f", Calc_IMC(p1.peso, p1.altura));

    return 0;
}
