/* 12) Escreva uma função que receba como parâmetro um vetor
 contendo N valores inteiros. Essa função deve retornar, por
 referência, dois valores: a soma dos números pares e ímpares.*/

#include <stdio.h>

struct valor{
    int valores[5];
};

typedef struct valor v;

void somaParImpar(v *valor, int n, int *soma){
    for(int i = 0; i < n; i++){
        if(valor->valores[i] % 2 == 0 || valor->valores[i] % 2 != 0)
            *soma = *soma + valor->valores[i];       
    }
}

int main(){
    v val;
    int soma = 0;

    printf("Digite 5 valores: ");
    for(int i = 0; i < 5; i++)
        scanf("%d", &val.valores[i]);

    somaParImpar(&val, 5, &soma);

    printf("Soma: %d", soma);

    return 0;
}
