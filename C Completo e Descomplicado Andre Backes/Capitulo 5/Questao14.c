/* 14) Escreva um programa que leia um número inteiro, maior ou
 igual a zero, do usuário. Imprima o enésimo termo da
 sequência de Fibonacci. Essa sequência começa no termo de
 ordem zero, e, a partir do segundo termo, seu valor é dado
 pela soma dos dois termos anteriores. Alguns termos dessa
 sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
*/

#include <stdio.h>

int main(){

    int num, soma, a = 0, b = 1;
    scanf("%d", &num);

    if(num >= 0){
        if(num == 0){
            printf("\n0");
        }else if(num == 1){
            printf("\n1");
        }
        for(int i = 2; i <= num; i++){
            soma = a + b;
            a = b;
            b = soma;
            if(i == num) printf("\nEnesimo termo: %d ", a);
        }
    }
    
    return 0;
}
