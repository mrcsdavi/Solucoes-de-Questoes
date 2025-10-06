/*11) Escreva uma função que receba por parâmetros dois valores
 inteiros x e y e calcule e retorne o resultado de x^y para o
 programa principal. Não use nenhuma função pronta para
 isso*/

#include <stdio.h>

int expoente(int x, int y){
    int calc = 1;
    for(int i = 0; i < y; i++)
        calc = calc * x;
    return calc;
}

int main(){
    int a, b;

    printf("Digite dois valores: ");
    scanf("%d %d", &a, &b);

    printf("Resultado de x^y eh: %d", expoente(a, b));

    return 0;
}
