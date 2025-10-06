/*2) Faça uma função que receba um número inteiro de 1 a 12 e
imprima em tela o mês e a sua quantidade de dias de acordo
com o número digitado pelo usuário. Exemplo: Entrada = 4.
Saída = abril.*/

#include <stdio.h>

void imprimirMes(int a){
    switch (a){
        case 1: printf("Janeiro, 31 dias"); break;
        case 2: printf("Fevereiro, 28 dias"); break;
        case 3: printf("Marco, 31 dias"); break;
        case 4: printf("Abril, 30 dias"); break;
        case 5: printf("Maio, 31 dias"); break;
        case 6: printf("Junho, 30 dias"); break;
        case 7: printf("Julho, 31 dias"); break;
        case 8: printf("Agosto, 31 dias"); break;
        case 9: printf("Setembro, 30 dias"); break;
        case 10: printf("Outubro, 31 dias"); break;
        case 11: printf("Novembro, 30 dias"); break;
        case 12: printf("Dezembro, 31 dias"); break;

        default: printf("Mes invalido"); break;
    }

}

int main(){
    int x;

    printf("Digite um numero referente ao mes: ");
    scanf("%d", &x);

    imprimirMes(x);

    return 0;
}
