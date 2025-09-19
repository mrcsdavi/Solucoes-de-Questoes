/* 12) Crie uma enumeração representando os dias da semana. Agora, escreva
 um programa que leia um valor inteiro do teclado e exiba o dia da semana
 correspondente*/

 #include <stdio.h>

enum diasSemana{
    Segunda = 1, Terca, Quarta, Quinta, Sexta, Sabado, Domingo,
};

 int main(){
    enum diasSemana s1;
    int escolha;

    printf("Digite o numero do dia da semana: ");
    scanf("%d", &escolha);

    s1 = (enum diasSemana) escolha;

    switch (s1){
        case Segunda: printf("Segunda"); break;
        case Terca: printf("Terca"); break;
        case Quarta: printf("Quarta"); break;
        case Quinta: printf("Quinta"); break;
        case Sexta: printf("Sexta"); break;
        case Sabado: printf("Sabado"); break;
        case Domingo: printf("Domingo"); break;
        default: printf("Numero invalido\n"); break;
    }

    return 0;
 }
