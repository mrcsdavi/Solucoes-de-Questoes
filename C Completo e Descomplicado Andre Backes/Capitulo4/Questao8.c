#include <stdio.h>

int main(){

    int idadeNadador;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idadeNadador);

    if(idadeNadador >= 5 && idadeNadador <= 7)
        printf("Categoria: infantil A");
    else if(idadeNadador >= 8 && idadeNadador <= 10)
        printf("Categoria: infantil B");
    else if(idadeNadador >= 11 && idadeNadador <= 13)
        printf("Categoria: juvenil A");
    else if(idadeNadador >= 14 && idadeNadador <= 17)
        printf("Categoria: juvenil B");
    else if(idadeNadador >= 18)
        printf("Categoria: Senior");
    else
        printf("Idade sem categoria.");
    
    return 0;
}
