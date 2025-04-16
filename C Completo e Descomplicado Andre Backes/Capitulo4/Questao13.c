/*13) Faça um programa que mostre ao usuário um menu com
 quatro opções de operações matemáticas (as operações básicas,
 por exemplo). O usuário escolhe uma das opções, e o seu
 programa pede dois valores numéricos e realiza a operação,
 mostrando o resultado*/

 #include <stdio.h>

int main(){

    int numA, numB, escolha;

    printf("Escolha um numero para realizar as operacoes matematicas: \n" 
        "1- Somar\n" 
        "2- Subtrair\n" 
        "3- Multiplicar\n"
        "4- Dividir\n");
    scanf("%d", &escolha);
    
    printf("Digite dois valores para a escolha %d\n", escolha);
    scanf("%d %d", &numA, &numB);
    
    switch(escolha){
        case 1:{
            int soma = numA + numB;
            printf("%d + %d = %d", numA, numB, soma); break;
        }
        case 2:{
            int subtrair = numA - numB;
            printf("%d - %d = %d", numA, numB, subtrair); break;
        }
        case 3:{
           int multiplica = numA * numB;
            printf("%d * %d = %d", numA, numB, multiplica); break;
        }
        case 4:{
            if(numA != 0 && numA != 0){
                float divide = (float) numA / numB;
                printf("%d / %d = %.2f", numA, numB, divide);
            }else
                printf("Nao eh possivel dividir por zero."); 

            break;
            }default: printf("escolha invalida. Voce escolheu %d para as operacoes", escolha);

           }
    return 0;
}

