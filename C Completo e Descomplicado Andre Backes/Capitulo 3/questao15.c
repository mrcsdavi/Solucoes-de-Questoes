/* 15) Faça um programa para ler um número inteiro positivo de
 três dígitos. Em seguida, calcule e mostre o número formado
 pelos dígitos invertidos do número lido. Exemplo:
 
 Número lido = 123 Número gerado = 321 */

#include <stdio.h>

int main(){

    int num, d1, d2, d3, inver;

    scanf("%d", &num);
    printf("Numero lido: %d\n", num);

    d1 = num%10;
    num = num/10;
    d2 = num%10;
    d3 = num/10;

    inver = (d1*100)+(d2*10)+d3;

    
    printf("Numero gerado: %d", inver);

    return 0;
}
