/*6) Crie um programa que contenha um array com cinco elementos inteiros.
 Leia esse array do teclado e imprima o endereço das posições contendo
 valores pares.*/

#include <stdio.h>

int main(){
    int arr[5];
    int *p = arr;

    for(int i = 0; i < 5; i++)
        scanf("%d", &p[i]);

    for(int i = 0; i < 5; i++)
        if(p[i] % 2 == 0)
            printf("%d ", p[i]);
    
    return 0;
}
