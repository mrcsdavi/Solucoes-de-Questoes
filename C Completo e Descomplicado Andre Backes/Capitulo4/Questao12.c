/*12) Usando o comando switch, escreva um programa que leia um
 inteiro entre 1 e 7 e imprima o dia da semana correspondente a
 esse número. Isto é, domingo, se 1, segunda-feira, se 2, e assim
 por diante.*/

 #include <stdio.h>

 int main(){

    int diaSemana;
    printf("Digite um numero entre 1 e 7 correspondente aos dias da semana: \n");
    scanf("%d", &diaSemana);

    switch(diaSemana){
        case 1: printf("Segunda-feira."); break;
        case 2: printf("Terca-feira."); break;
        case 3: printf("Quarta-feira."); break;
        case 4: printf("Quinta-feira."); break;
        case 5: printf("Sexta-feira."); break;
        case 6: printf("Sabado"); break;
        case 7: printf("Domingo"); break;
        default: printf("Numero invalido");
    }

    return 0;
 }
