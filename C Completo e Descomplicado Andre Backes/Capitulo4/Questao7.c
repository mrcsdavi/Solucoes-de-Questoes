/*7) Uma empresa vende o mesmo produto para quatro diferentes
 estados. Cada estado possui uma taxa diferente de imposto
 sobre o produto. Faça um programa em que o usuário entre
 com o valor e o estado de destino do produto e o programa
 retorne o preço final do produto acrescido do imposto do
 estado em que ele será vendido. Se o estado digitado não for
 válido, mostrará uma mensagem de erro*/

#include <stdio.h>
#include <string.h>

int main(){

    float valor;
    char estado[2];

    printf("Digite o valor e o estado\n");
    scanf("%f %s", &valor, estado);
    
    if(strcmp("MG",estado) != 0){
        float precoFinal = (valor * 0.07)+valor;
        printf("Preco final: %.2f\n", precoFinal);
    }else if(strcmp("SP",estado) != 0){
        float precoFinal = (valor * 0.12)+valor;
        printf("Preco final: %.2f\n", precoFinal);
    }else if(strcmp("RJ",estado) != 0){
        float precoFinal = (valor * 0.15)+valor;
        printf("Preco final: %.2f\n", precoFinal);
    }else if(strcmp("MS",estado) != 0){
        float precoFinal = (valor*0.08)+valor;
        printf("Preco final: %.2f\n", precoFinal);
    }else{
        printf("Estado invalido. Digite corretamente o seu estado.");
    }

}
