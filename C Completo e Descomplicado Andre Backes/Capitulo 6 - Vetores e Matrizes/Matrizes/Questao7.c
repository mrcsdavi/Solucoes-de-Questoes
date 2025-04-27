/* 7) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos
 valores contidos em sua diagonal secundária.*/

 #include <stdio.h>

 int main(){

    int diagSec = 2, soma = 0, matriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j == diagSec){
                soma = soma + matriz[i][j];
                diagSec--;
            }
        }
    }

    printf("Soma: %d", soma);

    return 0;
 }
