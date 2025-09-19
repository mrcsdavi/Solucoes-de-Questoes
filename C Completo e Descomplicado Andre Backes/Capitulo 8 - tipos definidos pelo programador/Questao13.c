/*13) Crie uma enumeração representando os meses do ano. Agora, escreva um
 programa que leia um valor inteiro do teclado e exiba o nome do mês*/

 #include <stdio.h>

enum meses{ Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro 
};

 int main(){
    int escolha;

    printf("Escolha o numero que representa um mes do ano: ");
    scanf("%d", &escolha);

    switch (escolha){
        case Janeiro: printf("Janeiro"); break;
        case Fevereiro: printf("Fevereiro"); break;
        case Marco: printf("Marco"); break;
        case Abril: printf("Abril"); break;
        case Maio: printf("Maio"); break;
        case Junho: printf("Junho"); break;
        case Julho: printf("Julho"); break;
        case Agosto: printf("Agosto"); break;
        case Setembro: printf("Setembro"); break;
        case Outubro: printf("Outubro"); break;
        case Novembro: printf("Novembro"); break;
        case Dezembro: printf("Dezembro"); break;
    }

    return 0;
 }
