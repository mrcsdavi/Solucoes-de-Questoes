/*14) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma
 dos elementos dessa matriz que pertencem à diagonal principal ou
 secundária. Calcule também a soma dos elementos que não pertencem a
 nenhuma das duas diagonais. Imprima na tela a diferença entre os dois
 valores.*/

 #include <stdio.h>

 int main(){

    int soma1 = 0, soma2 = 0, matriz[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
            scanf("%d", &matriz[i][j]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j || (i + j == 4 && i != 2 && j != 2))
                soma1 = soma1 + matriz[i][j];
            if(i != j && i + j !=4)
                soma2 = soma2 + matriz[i][j];
        }
    }

    printf("Soma de elementos da diagonal principal e secundaria: %d\n", soma1);
    printf("Soma sem pertencer a diag principal e secundaria: %d\n", soma2);

    return 0;
}
