#include <stdio.h>

int main(){

    float altura, peso;

    printf("Digite sua altura e o seu peso: \n");
    scanf("%f %f", &altura, &peso);
    
    if(altura < 1.20){
        if(peso < 60)
            printf("Categoria: A");
        else if(peso >= 60 && peso <= 90)
            printf("Categoria: D");
        else if(peso > 90)
            printf("Categoria: G");
    }
    else if(altura >= 1.20 && altura <= 1.70){
        if(peso <= 60)
            printf("Categoria: B");
        else if(peso >= 60 && peso <= 90)
            printf("Categoria: E");
        else if(peso > 90)
            printf("Categoria: H");
    }
    else if(altura > 1.70){
        if(peso <= 60)
            printf("Categoria: C");
        else if(peso >= 60 && peso <= 90)
            printf("Categoria: F");
        else if(peso > 90)
            printf("Categoria: I");
    }
    else    
        printf("Altura invalida");


    return 0;
}
