/*   5) Faça um programa que calcule o ano de nascimento de uma
 pessoa a partir de sua idade e do ano atual.

*/


#include <stdio.h>

int main(){

    int anoAtual, idade, nascAno;

    printf("Digite primeiro o ano e depois a idade: ");
    scanf("%d %d", &anoAtual, &idade);

    nascAno = anoAtual - idade;

    printf("Ano de nascimento: %d", nascAno); 

    return 0;
}