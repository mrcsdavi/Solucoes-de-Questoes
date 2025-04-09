#include <stdio.h>
#include <math.h>

/* Sejam a e b os catetos de um triângulo cuja hipotenusa h é
 obtida pela equação:
 Faça um programa que leia os valores de a e b, e
 calcule o valor da hipotenusa através da */

int main(){

    float a, b;

    scanf("%f %f", &a, &b);

    float h = sqrt(pow(a,2) + pow(b,2));
    
    printf("%.2f", h);

    return 0;
}
