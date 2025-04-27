/* 5) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela
 quantos valores negativos ela possui.*/

 #include <stdio.h>

 int main(){

    int cont=0, matriz[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++)
            scanf("%d", &matriz[i][j]);
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] < 0)
                cont++;
        }
    }

    printf("Possui %d valores negativos na matriz.", cont);

    return 0;
 }
