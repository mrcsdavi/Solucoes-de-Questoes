/*15) Elabore um programa que faça a leitura de vários números
 inteiros até que se digite um número negativo. O programa
 tem de retornar o maior e o menor número lido.*/

 #include <stdio.h>

 int main(){

    int num, maior, menor;
    scanf("%d", &num);
    menor = maior = num;

    do{
        scanf("%d", &num);
        if(num >= 0){
            if(maior < num) maior = num;
            if(menor > num) menor = num;
        }
    }while(num >= 0);

    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);


    return 0;
 }
