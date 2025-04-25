/* 2) Crie um programa que leia do teclado seis valores inteiros e em seguida
 mostre na tela os valores lidos na ordem inversa.*/

 #include <stdio.h>

 int main(){

    int vetor[6];

    for(int i = 0; i < 6; i++)
        scanf("%d", &vetor[i]);
    
    printf("Valores lidos do teclado: ");
    for(int i = 5; i >= 0; i--)
        printf("%d ", vetor[i]);

    return 0;
 }
