/*5) Faça um programa que leia um vetor de oito posições. Em seguida, leia
 também dois valores X e Y quaisquer correspondentes a duas posições no
 vetor. Seu programa deverá exibir a soma dos valores encontrados nas
 respectivas posições X e Y*/

 #include <stdio.h>

 int main(){

    int soma = 0, X, Y, vetor[8];

    for(int i = 0; i < 8; i++)
        scanf("%d", &vetor[i]);
    
    printf("Digite o Valor de X e Y: \n");
    scanf("%d %d", &X, &Y);

    soma = soma + vetor[X] + vetor[Y];
    printf("Soma de %d (X) + %d (Y) = %d", vetor[X], vetor[Y], soma);

    return 0;
 }
