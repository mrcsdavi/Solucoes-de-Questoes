/* 5) Faça um programa que leia um número e, caso ele seja
 positivo, calcule e mostre:

 • O número digitado ao quadrado.
 • A raiz quadrada do número digitado*/

#include <stdio.h>
#include <math.h>

int main(){

    int num;

    scanf("%d", &num);

    int potencia = num*num;
    float raiz = sqrt(num);

    if(num > 0){
        printf("potencia de %d eh: %d\n", num, potencia);
        printf("raiz de %d eh: %.2f\n", num, raiz);
    }
    return 0;
}
