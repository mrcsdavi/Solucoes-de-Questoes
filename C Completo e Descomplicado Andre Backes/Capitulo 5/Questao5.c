/*5) Faça um programa que calcule e mostre a soma dos 50
 primeiros números pares.*/

 #include <stdio.h>

 int main(){

    int i;
    int soma = 0;

    i = 1;
    while(i <= 100){
        if(i % 2 == 0){
            soma = soma + i;
        }
        i++;
    }
    printf("%d", soma); 


    return 0;
 }
