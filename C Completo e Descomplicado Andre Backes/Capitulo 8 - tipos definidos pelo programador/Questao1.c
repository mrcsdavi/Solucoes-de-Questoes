/* 1) Implemente um programa que leia o nome, a idade e o endereço de uma
 pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na
 tela os dados da estrutura lida.*/
#include <stdio.h>

struct cadastro{
    char nome[50];
    int idade;
    char endereco[50];
};

 int main(){
    struct cadastro c;

    printf("Digite o nome: ");
    gets(c.nome);
    printf("Digite a idade: ");
    scanf("%d", &c.idade);
    printf("Digite o endereco: ");
    setbuf(stdin, NULL);
    gets(c.endereco);

    printf("nome: %s\n", c.nome);
    printf("idade: %d\n", c.idade);
    printf("endereco: %s\n", c.endereco);

    return 0;
 }
