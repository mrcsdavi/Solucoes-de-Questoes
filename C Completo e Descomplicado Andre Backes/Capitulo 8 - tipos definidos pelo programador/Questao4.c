/* 4) Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o
 ponto superior esquerdo e o ponto inferior direito do retângulo. Cada
 ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y.
 Faça um programa que declare e leia uma estrutura Retângulo e exiba a
 área e o comprimento da diagonal e o perímetro desse retângulo.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Ponto{
    int X;
    int Y;
};

struct Retangulo{
    struct Ponto pontoSupEsq, pontoInfDir;
};


int main(){
    struct Retangulo ret;
    float area, base, altura, perimetro, diagonal;

    printf("Digite o X do ponto superior esquerdo: ");
    scanf("%d", &ret.pontoSupEsq.X);
    printf("Digite o Y do ponto superior esquerdo: ");
    scanf("%d", &ret.pontoSupEsq.Y);

    printf("Digite o X do ponto inferior direito: ");
    scanf("%d", &ret.pontoInfDir.X);
    printf("Digite o Y do ponto inferior direito: ");
    scanf("%d", &ret.pontoInfDir.Y);

    base = abs(ret.pontoInfDir.X - ret.pontoSupEsq.X);
    altura = abs(ret.pontoSupEsq.Y - ret.pontoInfDir.Y);
    area = base * altura;
    
    diagonal = sqrt((base*base) + (altura*altura));
    perimetro = 2*(base+altura);
    
    printf("Area = %.2f\nDiagonal = %.2f\nPerimetro = %.2f", area, diagonal, perimetro);

    return 0;
 }
