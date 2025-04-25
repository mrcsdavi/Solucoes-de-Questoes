/*9) Faça um programa que receba do usuário dois arrays, A e B, com 10
 números inteiros cada. Crie um novo array C calculando C = A – B. Mostre
 na tela os dados do array C.*/

 #include <stdio.h>

 int main(){

    int A[10], B[10], C[10];

    for(int i = 0; i < 10; i++){
        printf("Digite para o valor de %d: \n", i+1);
        scanf("%d", &A[i]);
        scanf("%d", &B[i]);
    }

    for(int i = 0; i < 10; i++){
        C[i] = A[i] - B[i];
        printf("%d\n", C[i]);
    }

    return 0;
 }
