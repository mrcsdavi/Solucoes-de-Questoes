/* 12) Escreva um programa que leia um número inteiro e calcule a
 soma de todos os divisores desse número, com exceção dele
 próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2
 + 3 + 6 + 11 + 22 + 33 = 78.*/

 #include <stdio.h>

 int main(){

    int num, soma = 0;
    scanf("%d", &num);

    printf("todos seus divisores (exceto ele proprio): ");
    for(int i = 1; i <= num; i++){
        int dividir = num/i;
        if(num/i && i != 1 && num % i == 0){
            soma = soma + dividir;
            printf("%d ", dividir);
        }
    }
    printf("\nsoma de todos seus divisores: %d", soma);


    return 0;
 }
