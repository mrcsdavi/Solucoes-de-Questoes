/*2) Crie uma estrutura para representar as coordenadas de um ponto no plano
 (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
distância dele até a origem das coordenadas, isto é, a posição (0,0).*/

#include <stdio.h>
#include <math.h>

struct posicoes{
    int X;
    int Y;
};

int main(){
    struct posicoes pos;
    float dist;

    printf("Digite um ponto no plano (x e y): ");
    scanf("%d %d", &pos.X, &pos.Y);

    dist = sqrt(pow(pos.X - 0, 2) + pow(pos.Y - 0, 2));

    printf("A distancia do ponto (%d,%d) até (0,0) é de %.2f", pos.X, pos.Y, dist); 
    
    return 0;
}
