/*10) Faça um programa que leia 10 inteiros positivos, ignorando
 não positivos, e imprima sua média.*/

 #include <stdio.h>
 
 int main(){

   int num, soma = 0;
   float media = 0.0;

    int i = 0;
    for(;i < 10; i++){
        scanf("%d", &num);
    
        if(num > 0){
         soma = soma + num;
         media = soma/10;
        }    
    }
    
    printf("media: %.2f", media);
    
    return 0;
 }
