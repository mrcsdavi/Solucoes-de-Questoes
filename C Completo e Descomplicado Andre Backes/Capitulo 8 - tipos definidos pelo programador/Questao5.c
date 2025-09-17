/* 5) Usando a estrutura Retângulo do exercício anterior, faça um programa que
 declare e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto
 está ou não dentro do retângulo*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Ponto{
    int X;
    int Y;
};

struct Retangulo{
    struct Ponto pontoSupEsq, pontoInfDir, ponto;
};

int main(){
    struct Retangulo ret;
    
    ret.pontoSupEsq.X = 2;
    ret.pontoSupEsq.Y = 6;

    ret.pontoInfDir.X = 6;
    ret.pontoInfDir.Y = 2;

    printf("Digite um ponto X: ");
    scanf("%d", &ret.ponto.X);

    printf("Digite um ponto Y: ");
    scanf("%d", &ret.ponto.Y);

    if(ret.ponto.X >= ret.pontoSupEsq.X && ret.ponto.X <= ret.pontoInfDir.X && 
       ret.ponto.Y >= ret.pontoInfDir.Y && ret.ponto.Y <= ret.pontoSupEsq.Y)
        printf("O ponto (%d, %d) esta dentro do retangulo", ret.ponto.X, ret.ponto.Y);
    else
        printf("O ponto (%d, %d) nao esta dentro", ret.ponto.X, ret.ponto.Y);

    return 0;
}
