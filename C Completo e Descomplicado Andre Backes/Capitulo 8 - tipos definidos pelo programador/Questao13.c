/*13)  13) Crie uma enumeração representando os meses do ano. Agora, escreva um
 programa que leia um valor inteiro do teclado e exiba o nome do mês
correspondente e quantos dias ele possui.*/

 #include <stdio.h>

enum meses{ Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro 
};

 int main(){
    int escolha;

    printf("Escolha o numero que representa um mes do ano: ");
    scanf("%d", &escolha);

    switch (escolha){
        case Janeiro: printf("Janeiro, possui 31 dias"); break;
        case Fevereiro: printf("Fevereiro, possui 28 dias"); break;
        case Marco: printf("Marco, possui 31 dias"); break;
        case Abril: printf("Abril, possui 30 dias"); break;
        case Maio: printf("Maio, possui 31 dias"); break;
        case Junho: printf("Junho, possui 30 dias"); break;
        case Julho: printf("Julho, possui 31 dias"); break;
        case Agosto: printf("Agosto, possui 31 dias"); break;
        case Setembro: printf("Setembro, possui 30 dias"); break;
        case Outubro: printf("Outubro, possui 31 dias"); break;
        case Novembro: printf("Novembro, possui 30 dias"); break;
        case Dezembro: printf("Dezembro, possui 31 dias"); break;
    }

    return 0;
 }
