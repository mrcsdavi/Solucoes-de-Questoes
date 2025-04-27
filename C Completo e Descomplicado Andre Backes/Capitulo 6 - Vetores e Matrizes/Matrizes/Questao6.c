/*6) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos
 valores contidos em sua diagonal principal*/

 #include <stdio.h>

 int main(){

    int soma = 0, matriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j)
                soma = soma + matriz[i][j];
        }
    }

    printf("Soma: %d", soma);

    return 0;
 }
