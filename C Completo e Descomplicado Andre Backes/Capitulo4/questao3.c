/* 3) Faça um programa que leia um número inteiro e verifique se
 esse número é par ou ímpar. */

 #include <stdio.h>

int main(){

    int num;

    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O numero %d eh par", num);
    }else{
        printf("O numero %d eh impar", num);
    }

    return 0;
}
