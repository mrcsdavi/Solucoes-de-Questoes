/* 6) Leia uma velocidade em km/h (quilômetros por hora) e
 apresente convertida em m/s (metros por segundo). A fórmula
 de conversão é M = K/36, sendo K a velocidade em km/h e M
 em m/s.

*/

#include <stdio.h>


int main(){
    float M, K;

    scanf("%f %f", &M, &K);

    M = K/3.6;

    printf("%.2f", M);

    return 0;
}
