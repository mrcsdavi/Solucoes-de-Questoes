/* 4) Crie um programa que contenha uma matriz de float com três linhas e três
 colunas. Imprima o endereço de cada posição dessa matriz*/

#include <stdio.h>

int main(){
    float m[3][3];
    float *p = &m[0][0];

    for(int i = 0; i < 9; i++){
            printf("%p\n", (p+i));
    }
    

    return 0;
}
