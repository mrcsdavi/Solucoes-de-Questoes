/*12) Escreva um programa que leia o nome e o valor de determinada
 mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é
 de 10% sobre o valor total, calcule o valor a ser pago à vista. Escreva o
 nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago
 à vista.*/

#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    float valor;
    
    printf("Digite o nome da mercadoria: ");
    fgets(str, 50, stdin);
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);

    float desconto = (10*valor)/100;

    printf("Nome da mercadoria: %s\n", str);
    printf("Valor total da mercadoria: %.2f R$\n ", valor);
    printf("Desconto aplicado de 10%%: %.2f%%\n", desconto);
    printf("Valor a ser pago a vista: %.2f R$", valor-desconto);

    return 0;
}
