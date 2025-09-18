/* 8) Crie uma estrutura capaz de armazenar o nome e a data de nascimento de
 uma pessoa. Agora, escreva um programa que leia os dados de seis
 pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais velha.*/

#include <stdio.h>

struct pessoa{
    char nome[50];
    int dia;
    int mes;
    int ano;
};

int main(){
    struct pessoa p[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o nome da %d° pessoa: \n", i+1);
        setbuf(stdin, NULL);
        gets(p[i].nome);
        printf("Digite a sua data de nascimento: dia/mes/ano: \n");
        scanf("%d %d %d", &p[i].dia, &p[i].mes, &p[i].ano);
    }

    int indiceVelho = 0;
    int indiceNovo = 0;
    for(int i = 1; i < 6; i++){
        if(p[i].ano > p[indiceNovo].ano)
            indiceNovo = i;
        else if (p[i].ano == p[indiceNovo].ano){
            if(p[i].mes > p[indiceNovo].mes)
                indiceNovo = i;
            else if(p[i].mes == p[indiceNovo].mes){
                if(p[i].dia > p[indiceNovo].dia)
                    indiceNovo = i;
                }
            }
        }
    

    for(int i = 1; i < 6; i++){
        if(p[i].dia > p[indiceVelho].dia)
            indiceVelho = i;
        else if (p[i].dia == p[indiceVelho].dia){
            if(p[i].mes > p[indiceVelho].mes)
                indiceVelho = i;
            else if(p[i].ano == p[indiceVelho].ano){
                if(p[i].dia > p[indiceVelho].dia)
                    indiceVelho = i;
                }
            }
        }


    printf("A pessoa mais velha é o(a) %s e nasceu em %d/%d/%d e a mais nova é o(a) %s e nasceu em %d/%d/%d", 
                    p[indiceVelho].nome, p[indiceVelho].dia, p[indiceVelho].mes, p[indiceVelho].ano,
                    p[indiceNovo].nome, p[indiceNovo].dia, p[indiceNovo].mes, p[indiceNovo].ano);

    return 0;
}
