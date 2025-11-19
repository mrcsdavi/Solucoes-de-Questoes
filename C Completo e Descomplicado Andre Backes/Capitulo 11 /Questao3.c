#include <stdio.h>
#include <stdlib.h>

struct Cadastro {
    char nome[50];
    int idade;
    char endereco[50];
};

typedef struct Cadastro cad;

cad* alocar(int N) {
    cad *p = (cad*) malloc(N * sizeof(cad));

    if (p == NULL) {
        printf("Erro ao alocar memoria!\n");
        return NULL;
    }

    for (int i = 0; i < N; i++) {
        printf("\nPessoa %d:\n", i + 1);
        
        setbuf(stdin, NULL);
        printf("Nome: ");
        fgets(p[i].nome, 50, stdin);

        printf("Idade: ");
        scanf("%d", &p[i].idade);
        setbuf(stdin, NULL);

        printf("Endereco: ");
        fgets(p[i].endereco, 50, stdin);
    }

    return p;
}

int main() {
    int N = 2;
    cad *pessoas = alocar(N);

    if (pessoas == NULL) return 1;

    printf("\n----- DADOS DIGITADOS -----\n");
    for (int i = 0; i < N; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Endereco: %s", pessoas[i].endereco);
    }

    free(pessoas);
    return 0;
}
