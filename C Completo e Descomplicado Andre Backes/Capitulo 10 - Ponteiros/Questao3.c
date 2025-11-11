/* 3) Crie um programa que contenha um array de float com 10 elementos.
 Imprima o endereço de cada posição desse array*/

#include <stdio.h>

int main(){
    float *arr[10];

    for(int i = 0; i < 10; i++){
        printf("%p\n", arr[i]);
    }
    
    return 0;
}
