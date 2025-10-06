/* 8) Elabore uma função para verificar se um número é um
 quadrado perfeito. Um quadrado perfeito é um número inteiro
 não negativo que pode ser expresso como o quadrado de outro
 número inteiro. Exemplos: 1, 4, 9.*/

#include <stdio.h>

void verifica_QuadPerf(int a){
    if(a > 0){
        int quad = a*a;
        printf("O numero %d eh um quadrado perfeito pois eh: %d", a, quad);
    }else{
        printf("Nao eh um quadrado perfeito, pois %d eh negativo ou igual a 0", a);
    }
}

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    verifica_QuadPerf(num);

    return 0;
}
