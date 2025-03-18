/* 9) Leia um ângulo em graus e apresente-o convertido em
    radianos. A fórmula de conversão é R = G * π/180, sendo G o
    ângulo em graus e R em radianos e π = 3.141592.
*/

#include <stdio.h>

int main(){

    float G, R, pi = 3.141592;

    scanf("%f", &G);

    R = G*pi/180;

    printf("%.3f", R);


    return 0;
}
