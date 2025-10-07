/*1) Escreva uma função que, dado um número real passado como parâmetro,
 retorne a parte inteira e a parte fracionária desse número por referência*/

#include <stdio.h>

void retornar(float num, int *inteira, float *frac){
    *inteira = (int) num;
    *frac = num - *inteira;
}

int main(){
    float a, partFrac;
    int partInteira;

    printf("Digite um numero: ");
    scanf("%f", &a);

    retornar(a, &partInteira, &partFrac);

    printf("Parte inteira: %d\n", partInteira);
    printf("Parte fracionaria: %.2f\n", partFrac);

    return 0;
}
