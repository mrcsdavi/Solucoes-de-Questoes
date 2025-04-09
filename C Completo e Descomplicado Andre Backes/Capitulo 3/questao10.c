/* 10) A importância de R$ 780.000,00 será dividida entre três
 ganhadores de um concurso, sendo que:
    i. O primeiro ganhador receberá 46% do total.
    ii. O segundo receberá 32% do total.
    iii. O terceiro receberá o restante.

    Calcule e imprima a quantia recebida por cada
    um dos ganhadores.
*/


#include <stdio.h>

int main(){

    float valor, g1, g2, g3;

    valor = 780000;

    g1 = valor*0.46;
    g2 = valor*0.32;
    g3 = valor*0.22;

    printf("Ganhador 1: %.2f R$\n Ganhador 2: %.2f R$\n Ganhador 3: %.2f R$\n", g1, g2, g3);

    return 0;
}
