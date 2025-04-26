/*12) Faça um programa que leia um vetor de 10 posições. Verifique se existem
 valores iguais e os escreva na tela.*/

 #include <stdio.h>

 int main(){

    int incremento = 0, vetor[10];

    for(int i = 0; i < 10; i++)
        scanf("%d", &vetor[i]);

    
    for(int i = 0; i < 10; i++){
        int j;
        for(j = 0; j < 10; j++){
            if(vetor[i] == vetor[j] && incremento == 0){
                incremento++;
                continue;
            }else if(vetor [i] == vetor[j] && incremento == 1){
                printf("Valores iguais: %d\n", vetor[j]);
            }
        }
        incremento = 0;
    }
}   

