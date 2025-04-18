/* 4) Faça um programa que determine e mostre os cinco primeiros
 múltiplos de 3 considerando números maiores que 0. */

 #include <stdio.h>

 int main(){

    int i;

    i = 1;
    for( ;i <= 5; ){
        int multi = 3*i;
        printf("%d ", multi);
        i++;
    }

    return 0;
 }
