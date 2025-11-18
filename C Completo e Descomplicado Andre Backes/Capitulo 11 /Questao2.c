/* 2) Crie uma estrutura representando um aluno de uma disciplina. Essa
 estrutura deve conter o número de matrícula do aluno, seu nome e as notas
 de três provas. Escreva um programa que mostre o tamanho em byte dessa
 estrutura*/

#include <stdio.h>

struct aluno{
    int matricula;
    char nome[50];
    float notas[3];
}a;

int main(){

    printf("Digite o numero da matricula: ");
    scanf("%d", &a.matricula);

    printf("Digite o nome do aluno: ");
    setbuf(stdin, NULL);
    gets(a.nome);
    
    printf("Digite as 3 notas do aluno: ");
    for(int i = 0; i < 3; i++)
        scanf("%f", &a.notas[i]);

    printf("Tamanho da estrutura: %d", sizeof(a));


    return 0;
}
