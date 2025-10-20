#include <stdio.h>

void calcularTransposta(int mA[][5], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int temp = mA[i][j];
            mA[i][j] = mA[j][i];
            mA[j][i] = temp;
        }
    }
}

int main(){
    int mA[5][5];

    printf("Digite os elementos da matriz 5x5:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &mA[i][j]);
        }
    }

    calcularTransposta(mA, 5);

    printf("\nMatriz transposta:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", mA[i][j]);
        }
        printf("\n");
    }

    return 0;
}
