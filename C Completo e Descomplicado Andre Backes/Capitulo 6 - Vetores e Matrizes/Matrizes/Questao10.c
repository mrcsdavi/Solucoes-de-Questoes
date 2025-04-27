/*10) Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três
 provas. Em seguida, calcule e escreva na tela o número de alunos cuja pior
 nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2 e o
 número de alunos cuja pior nota foi na prova 3*/

 #include <stdio.h>

 int main(){

    int contN[3] = {0,0,0}, matriz[10][3];

    for(int i = 0; i < 3; i++){
        printf("Notas %d prova: \n", i+1);
        for(int j = 0; j < 10; j++)
            scanf("%d", &matriz[j][i]);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            if(matriz[j][i] < 7)
                contN[i] = contN[i] + 1;
        }
        printf("Qtd de alunos de nota baixa da %d prova: %d\n", i+1, contN[i]);
    }

    return 0;
 }
