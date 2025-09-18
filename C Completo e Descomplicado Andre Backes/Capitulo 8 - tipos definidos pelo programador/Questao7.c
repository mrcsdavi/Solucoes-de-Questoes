/*7) Crie uma estrutura representando uma hora. Essa estrutura deve conter os
 campos hora, minuto e segundo. Agora, escreva um programa que leia um
 vetor de cinco posições dessa estrutura e imprima a maior hora.*/

#include <stdio.h>

struct hora{
    int hora;
    int minuto;
    int segundo;
};

int main(){
    struct hora relogio[5];

    for(int i = 0; i < 5; i++){
        printf("Digite a %d° hora: ", i+1);
        scanf("%d", &relogio[i].hora);

        printf("Digite o %d° minuto: ", i+1);
        scanf("%d", &relogio[i].minuto);

        printf("Digite o %d° segundo: ", i+1);
        scanf("%d", &relogio[i].segundo);
    }
    
    int maiorIndice = 0;
    for(int i = 1; i < 5; i++){
        if(relogio[i].hora >= relogio[maiorIndice].hora)
            maiorIndice = i;
        else if(relogio[i].hora == relogio[maiorIndice].hora){
            if(relogio[i].minuto > relogio[maiorIndice].minuto)
                maiorIndice = i;
            else if(relogio[i].minuto == relogio[maiorIndice].minuto){
                if(relogio[i].segundo > relogio[maiorIndice].segundo)
                    maiorIndice = i;
            }
        }
    }

    printf("A maior hora foi de %d horas %d minutos e %d segundos", relogio[maiorIndice].hora, relogio[maiorIndice].minuto, relogio[maiorIndice].segundo);


    return 0;
}
