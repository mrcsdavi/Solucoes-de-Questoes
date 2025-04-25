/*10) Faça um programa que preencha um vetor de tamanho 100 com os 100
 primeiros números naturais que não são múltiplos de 7. Ao final, imprima
 esse vetor na tela*/

 #include <stdio.h>

 int main(){

    int vetor[100];

    for(int i = 0; i < 101; i++){
        vetor[i] = 0;
        if(i % 7 != 0)
            vetor[i] = i;
    }
    for(int i = 0; i < 101; i++){
        if(!(i % 7 == 0))
            printf("%d\n", vetor[i]);
    }
    return 0;
 }
