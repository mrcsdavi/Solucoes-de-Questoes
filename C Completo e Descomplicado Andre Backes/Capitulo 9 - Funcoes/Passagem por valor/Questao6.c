/* 6) Escreva uma função que receba o peso (quilos) e a altura (metros) de uma
 pessoa. Calcule e retorne o IMC (Índice de Massa Corporal) dessa pessoa*/

#include <stdio.h>

struct pessoa{
    float peso;
    float altura;
};

typedef struct pessoa p;

float Calc_IMC(p pessoa){
    return pessoa.peso/(pessoa.altura*pessoa.altura);
}

int main(){
    float peso, altura;

    printf("Digite o seu peso e a sua altura: ");
    scanf("%f %f", &peso, &altura);
    p pes = {peso, altura};
    
    printf("Calculo do IMC eh: %.2f", Calc_IMC(pes));

    return 0;
}
