#include <stdio.h>

struct aluno {
    int matricula;
    char nome[50];
    float notas[3];
};

typedef struct aluno a;

int maiorMedia(a *alu, int n) {
    int indiceMaior = 0;
    float maiorMedia = 0.0;

    for (int i = 0; i < n; i++) {
        float soma = 0;
        for (int j = 0; j < 3; j++) {
            soma += alu[i].notas[j];
        }
        float media = soma / 3.0;

        if (media > maiorMedia) {
            maiorMedia = media;
            indiceMaior = i;
        }
    }

    return indiceMaior;
}

int main() {
    int n = 3;
    a alu[n];

    for (int i = 0; i < n; i++) {
        printf("Matricula do aluno %d: ", i + 1);
        scanf("%d", &alu[i].matricula);

        printf("Nome do aluno %d: ", i + 1);
        setbuf(stdin,NULL);
        gets(alu[i].nome);

        printf("Digite as 3 notas do aluno %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%f", &alu[i].notas[j]);
        }
    }

    int indice = maiorMedia(alu, n);

    printf("\nAluno com maior média geral:\n");
    printf("Nome: %s\n", alu[indice].nome);
    printf("Matrícula: %d\n", alu[indice].matricula);

    float soma = 0;
    for (int j = 0; j < 3; j++) {
        soma += alu[indice].notas[j];
    }
    printf("Média: %.2f\n", soma / 3.0);

    return 0;
}
