#include <stdio.h>

/* 11) Leia o valor do raio de um círculo. Calcule e imprima a área
 do círculo correspondente. A área do círculo é A = π* raio^2,
 sendo π = 3.141592. */


 int main(){

    float area, raio, pi = 3.141592;

    scanf("%f", &raio);

    area = pi*(raio*raio);

    printf("%.2f", area);

    return 0;
 }
