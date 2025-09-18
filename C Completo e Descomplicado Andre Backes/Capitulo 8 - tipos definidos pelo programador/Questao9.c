/* 9) Crie uma estrutura representando um atleta. Essa estrutura deve conter o
 nome do atleta, seu esporte, idade e altura. Agora, escreva um programa
 que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais
 alto e do mais velho*/

#include <stdio.h>

struct atleta{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
};

int main(){
    struct atleta a[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o nome do %d° atleta: ", i+1);
        setbuf(stdin, NULL);
        gets(a[i].nome);
        printf("Digite o esporte do %d° atleta: ", i+1);
        gets(a[i].esporte);

        printf("Digite a idade do %d° atleta: ", i+1);
        scanf(" %d", &a[i].idade);
        printf("Digite a altura do %d° atleta: ", i+1);
        scanf(" %f", &a[i].altura);
    }

    int maiorAtleta = 0;
    int idadeVelho = 0;
    for(int i = 1; i < 5; i++){
        if(a[i].altura > a[maiorAtleta].altura)
            maiorAtleta = i;
        if(a[i].idade > a[idadeVelho].idade)
            idadeVelho = i;
    }

    printf("O atleta mais alto eh o %s com a altura de %.2f. Ja o Atleta mais velho eh o %s, sua idade eh %d",
                    a[maiorAtleta].nome, a[maiorAtleta].altura, a[idadeVelho].nome, a[idadeVelho].idade);


    return 0;
}
