/*20) Faça uma função que calcule e retorne o número neperiano e,
 e = 2,71828183, usando a série a seguir:*/

#include <stdio.h>

float calcar_Nep(int n){
    float e = 1.0;
    float fat = 1.0;

    for(int i = 1; i < n; i++){
        fat = fat*i;
        e = e + 1.0/fat;
    }

    return e;
}

int main(){
    int a;
    printf("Digite um valor N: ");
    scanf("%d", &a);

    printf("O valor aproximado ao numero neperiano eh: %.2f", calcar_Nep(a));


    return 0;
}
