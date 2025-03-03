/* 4) Leia quatro valores do tipo float. Calcule e exiba a média
 aritmética desses valores.
 */

#include <stdio.h>


int main(){

    float a,b,c,d, media;

    scanf("%f %f %f %f", &a, &b, &c, &d);
    
    media = (a+b+c+d)/4;

    printf("media: %.2f", media);

    return 0;
}