/* 5) Escreva uma função para o cálculo do volume de uma esfera
 em que π = 3.1414592 valor do raio r deve ser
 passado por parâmetro.*/

#include <stdio.h>

void volumeEsfera(float raio){
    const float pi = 3.1414592;
    float v = 4.0/3.0*pi*(raio*raio*raio);
    printf("O volume da esfera eh: %.2f", v);
}

int main(){
    float r;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &r);

    volumeEsfera(r);

    return 0;
}
