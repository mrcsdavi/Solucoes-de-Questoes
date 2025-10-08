/*4) Escreva uma função que receba um array contendo a nota de
 10 alunos e retorne a média dos alunos.*/

#include <stdio.h>

struct alunos{
    float notas[10];
    float media;
};

typedef struct alunos alunos;

void media(alunos *a, int n){
    float soma = 0;
    for(int i = 0; i < n; i++){
        scanf("%f", &a->notas[i]);
        soma = soma + a->notas[i]; 
    }
    a->media = soma/10;
}


int main(){
    alunos a;
    
    printf("Digite 10 notas dos alunos: ");
    media(&a, 10);
    
    printf("A media da nota dos alunos eh: %.2f", a.media);

}
