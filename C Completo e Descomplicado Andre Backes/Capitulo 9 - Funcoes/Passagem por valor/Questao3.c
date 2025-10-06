/*3) Escreva uma função que receba por parâmetro uma
 temperatura em graus Fahrenheit e a retorne convertida em
 graus Celsius. A fórmula de conversão é: C = (F – 32.0) *
 (5.0/9.0), sendo F a temperatura em Fahrenheit e C a
 temperatura em Celsius.*/

#include <stdio.h>

struct var{
    float F;
};

float converterCelsius(float F){
    int C;
    C = (F - 32.0) * (5.0/9.0);

    return C;
}

int main(){
    struct var var;

    printf("Digite um valor para Fahrenheit: ");
    scanf("%f", &var.F);

    printf("O valor convertido para Celsius eh: %.2f", converterCelsius(var.F));
    return 0;
}
