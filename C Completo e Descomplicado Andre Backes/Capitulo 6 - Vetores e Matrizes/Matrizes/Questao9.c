#include <stdio.h>

int main(){

    int vetor[3] = {0, 0, 0}, matriz[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);
    }

    printf("{ ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
                vetor[i] = vetor[i] + matriz[j][i];
        }
        printf("%d ", vetor[i]); 
    }
    printf("}\n");

    return 0;
}
