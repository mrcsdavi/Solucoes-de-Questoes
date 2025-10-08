/*2) Escreva uma função para o cálculo do volume e da área de uma esfera*/

#include <stdio.h>

struct valores{
    float volume;
    float area;
};

typedef struct valores esf;

void esfera(float raio, esf *ef){
    const float pi = 3.1414592;

    ef->volume = (4/3*pi) + (raio*raio*raio);
    ef->area = 4*pi*(raio*raio);
}

int main(){
    float a;
    esf f;

    printf("Digite o raio da esfera para fazer o calculo: ");
    scanf("%f", &a);
    
    esfera(a, &f);

    printf("%.2f\n", f.volume);
    printf("%.2f\n", f.area);

    return 0;
}
