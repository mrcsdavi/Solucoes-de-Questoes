/* 21) Escreva um programa que leia certa quantidade de números, imprima o
 maior deles e quantas vezes o maior número foi lido. A quantidade de
 números a serem lidos deve ser fornecida pelo usuário
 */

 #include <stdio.h>

 int main(){

    int N, num, maior, maiorAnt, menor, qtdMaiorLido = 0;

    printf("Digite a quantidade de numeros a ser lido: \n");
    scanf("%d", &N);
    
    printf("Digite os numeros: \n");
    for(int i = 1; i < N; i++){
        if(i == 1){
            scanf("%d", &num);
            maior = menor = maiorAnt = num;
            qtdMaiorLido++;
        }
        
        
        scanf("%d", &num);

        if(num == maior) qtdMaiorLido++; 
        if(num > maior){
            maior = num;
            qtdMaiorLido++;

            if(maiorAnt != maior){
                qtdMaiorLido = 1;
            }

        } 
        else if(num < menor) menor = num;
    
    }

    printf("maior numero lido: %d\n", maior);
    printf("quantidade do numero maior atual ' %d ' foi lido: %d vezes\n", maior , qtdMaiorLido);


    return 0;
 }
