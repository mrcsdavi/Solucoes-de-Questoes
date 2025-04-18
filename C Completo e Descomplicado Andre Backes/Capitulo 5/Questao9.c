/*9) Escreva um programa que leia 10 números e escreva o menor
 valor lido e o maior valor lido*/

 #include <stdio.h>

 int main(){
 
    int num, menor, maior;
    
    printf("Digite 10 numeros: \n");
    scanf("%d", &num);
    menor = maior = num;

    for(int i = 1; i < 10; i++){
        scanf("%d", &num);

        if(maior < num) maior = num;
        if(menor > num) menor = num;
    }

    printf("Maior: %d", maior);
    printf("Menor: %d", menor);

    return 0;
 }
