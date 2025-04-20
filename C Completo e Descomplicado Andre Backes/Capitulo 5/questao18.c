/* 18) Faça um programa que receba um número inteiro maior do que 1 e
 verifique se o número fornecido é primo ou não.
 */

 #include <stdio.h>
 
 int main(){

    int num, divisores = 0;

    scanf("%d", &num);
    if(num > 1){
        for(int i = 1; i <= num; i++){
        
            if(num % i == 0){
                divisores++;
            }
        }
    }

    if(divisores == 2)  printf("O numero: %d eh primo, tem apenas 2 divisores", num);
    else printf("O numero %d NAO eh primo pois tem %d divisores", num, divisores);

    return 0;
 }
