#include <math.h>
#include <stdio.h>

int main(){

    float soma = 0, media, somaQuadrados = 0;
    int V[10];
    float d;

    for(int i = 0; i < 10; i++){
        scanf("%d", &V[i]);
        soma = soma + V[i];
    }

    media = soma/10;

    for(int i = 0; i<10; i++){
        somaQuadrados = somaQuadrados + (V[i] - media) * (V[i] - media);
    }

    d = sqrt(somaQuadrados/(10-1));

    printf("%.2f", d);
    
    return 0;
}
