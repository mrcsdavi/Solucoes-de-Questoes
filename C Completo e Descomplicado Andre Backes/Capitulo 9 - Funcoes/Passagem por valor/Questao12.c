/*12) Escreva uma função que receba um número inteiro positivo e
 retorne o maior fator primo desse número.*/

#include <stdio.h>

int maiorPrimo(int num){
    int maior = 1;
    int i = 2;

    while(num > 1){
        if(num % i == 0){
            maior = i;
            num = num/i;
            while(num % i == 0)
                num = num/i;
            }
            i++;      
        } 
    return maior;
}

int main(){
    int num = 3;

    if(num > 0)
        printf("O maior fator primo desse numero eh: %d", maiorPrimo(num));
    else
        printf("Numero invalido! Eh menor ou igual a 0.");



    return 0;
}
