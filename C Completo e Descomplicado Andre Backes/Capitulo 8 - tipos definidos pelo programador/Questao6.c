/*6) Crie uma estrutura representando um aluno de uma disciplina. Essa
 estrutura deve conter o número de matrícula do aluno, seu nome e as notas
 de três provas. Agora, escreva um programa que leia os dados de cinco
 alunos e os armazene nessa estrutura. Em seguida, exiba o nome e as notas
 do aluno que possui a maior média geral dentre os cinco*/

#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int matricula;
    char nome[50];
    int notas[3];
};

int main(){
    struct aluno a[5];
    float media[5];

    for(int i = 0; i < 5; i++){
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &a[i].matricula);
        
        printf("Digite o nome do aluno %d: ", i+1);
        setbuf(stdin, NULL);
        gets(a[i].nome);

        for(int j = 0; j < 3; j++){
            printf("Nota %d\n", j+1);
            scanf("%d", &a[i].notas[j]);   
        }
        media[i] = (a[i].notas[0] + a[i].notas[1] + a[i].notas[2])/3.0;
    }

    int indiceMaior = 0;
    for(int i = 1; i < 5; i++){
        if(media[i] > media[indiceMaior]){
            indiceMaior = i;
        }
    }

    printf("A media do aluno %s eh a maior: %.2f\n", a[indiceMaior].nome, media[indiceMaior]);
    
    for(int j = 0; j < 3; j++){
        printf("Nota %d: %d\n", j+1, a[indiceMaior].notas[j]);
    }



    return 0;
}
