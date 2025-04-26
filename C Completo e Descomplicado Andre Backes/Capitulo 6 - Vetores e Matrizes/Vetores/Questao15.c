/* 15) Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os
 elementos desse vetor e imprima o vetor na tela*/

 #include <stdio.h>

 int main(){
    int copia;
    float vetor[10];

    for(int i = 0; i < 10; i++)
        scanf("%f", &vetor[i]);
    

    for(int i = 0; i< 10; i++){
        for(int j = i+1; j < 10; j++){
            if(vetor[i] > vetor[j]){
                copia = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = copia;
            }
            
        }
    }

    for(int i = 0; i< 10; i++)
        printf("%.2f\n", vetor[i]);

    return 0;
 }
