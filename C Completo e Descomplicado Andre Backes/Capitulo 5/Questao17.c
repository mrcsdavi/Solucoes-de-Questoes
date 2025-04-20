/*17) Escreva um programa que leia um número inteiro positivo N
 e em seguida imprima N linhas do chamado triângulo de
 Floyd:
 1
 2  3 
 4  5  6
 7  8  9  10
 11 12 13 14 15
 16 17 18 19 20 21*/

#include <stdio.h>

int main(){

    int N, num = 1;
    
    scanf("%d", &N);
    if(N > 0){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= i; j++){
                printf("%d ", num);
                num++;
            }
            printf("\n");
        }
    }
    
    return 0;
}
