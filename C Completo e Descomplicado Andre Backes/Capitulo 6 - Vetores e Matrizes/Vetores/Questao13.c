/*13) Faça um programa para ler 10 números diferentes a serem armazenados
 em um vetor. Os números deverão ser armazenados no vetor na ordem em
 que forem lidos, sendo que, caso o usuário digite um número que já foi
 digitado, o programa deverá pedir a ele para digitar outro número. Note
 que cada valor digitado pelo usuário deve ser pesquisado no vetor,
 verificando se ele existe entre os números que já foram fornecidos. Exiba na
 tela o vetor final que foi digitado*/

 #include <stdio.h>

 int main(){

    int incremento = 0, vetor[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);

        for(int j = 0; j < 10; j++){
            if(vetor[i] == vetor[j] && incremento == 0 ){
                incremento++;
                continue;
            }
            else if(vetor[i] == vetor[j] && incremento == 1){
                printf("Valor igual encontrado: %d\n", vetor[j]);
                printf("Digite outro valor: \n");
                scanf("%d", &vetor[j]);
            }
        }
        incremento = 0;

    }
    printf("\nVetor final: \n");
    for(int i = 0; i < 10; i++)
        printf("%d\n", vetor[i]);


    return 0;
 }
