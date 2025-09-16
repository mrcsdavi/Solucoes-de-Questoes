/*3) Crie uma estrutura para representar as coordenadas de um ponto no plano
 (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a
 distância entre eles*/

#include <stdio.h>
#include <math.h>

struct coordernadas{
    int X;
    int Y;
};

int main(){
    struct coordernadas pos1, pos2;
    float dist;

    printf("Digite as coodernadas X e Y do primeiro ponto: ");
    scanf("%d %d", &pos1.X, &pos1.Y);

    printf("Digite as coodernadas X e Y do segundo ponto: ");
    scanf("%d %d", &pos2.X, &pos2.Y);

    dist = sqrt(pow(pos2.X - pos1.X, 2) + pow(pos2.Y - pos1.Y, 2));

    printf("Distancia entre o ponto 1 (%d,%d) e o ponto 2 (%d,%d) eh de: %.2f", pos1.X, pos1.Y, pos2.X, pos2.Y, dist);

    return 0;
 }
