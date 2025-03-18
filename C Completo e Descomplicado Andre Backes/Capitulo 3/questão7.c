/*7) Faça um programa que leia um valor em reais e a cotação do
 dólar. Em seguida, imprima o valor correspondente em
 dólares.*/

#include <stdio.h>

int main(){

   float reais, dolar = 5.67; //atual cotação

   scanf("%f", &reais);

    reais *= dolar; 

    printf("%.2f", reais);

    return 0;
}
