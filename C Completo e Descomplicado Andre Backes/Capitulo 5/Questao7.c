/*7) Elabore um programa que peça ao usuário para digitar 10
 valores. Some esses valores e apresente o resultado na tela.*/

 #include <stdio.h>

 int main(){

    int num, soma;
    soma = 0;

    printf("Digite 10 valores: \n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("%d\n", soma);
    
    return 0;
 }
