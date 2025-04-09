/* 12) Leia a altura e o raio de um cilindro circular e imprima o
 volume desse cilindro. O volume de um cilindro circular é
 calculado por meio da seguinte fórmula: V = pi*raio^2 * altura, com pi = 3.141592 */
#include <stdio.h>


 int main(){

    float altura, raio, pi = 3.141592;

    printf("Digite a altura e o raio do cilindro circular\n");
    scanf("%f %f", &altura, &raio);

    float V = pi*(raio*raio)*altura;

    printf("%.2f", V);


    return 0;
 }
