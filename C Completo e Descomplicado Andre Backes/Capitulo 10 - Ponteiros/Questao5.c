/* 5) Crie um programa que contenha um array de inteiros com cinco elementos.
 Utilizando apenas aritmética de ponteiros, leia esse array do teclado e
 imprima o dobro de cada valor lido.
*/

#include <stdio.h>

int main(){
    int arr[5];
    int *p = arr;

    for(int i = 0; i < 5; i++){
        scanf("%d", &*(p+i));
    }

    for(int i = 0; i < 5; i++){
        *(p+i) = *(p+i)*2;
        printf("%d ", *(p+i));
    }
    

    return 0;
}
