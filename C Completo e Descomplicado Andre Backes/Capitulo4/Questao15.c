#include <stdio.h>
#include <math.h>

// formula de bhaskara
int main(){

    int a, b, c, delta;
    
    printf("Digite os tres coeficientes (a, b, c) da equacao: \n");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a != 0){
        delta = b*b - 4*a*c;
        if(delta < 0) printf("Nao existe raiz.\n");
        if(delta == 0){
            float bhaskIgual = (-b)/(2.0*a);
            printf("Resultado: %.2f. Raiz unica.\n", bhaskIgual);   
        }
        if(delta > 0){
            float bhaskPositiva = (-b + sqrt(delta))/(2.0*a);
            float bhaskNegativa = (-b - sqrt(delta))/(2.0*a);
            printf("Raizes: %.2f e %.2f", bhaskPositiva, bhaskNegativa);
        }
    }else
        printf("Nao eh equacao do segundo grau.");

    return 0;
}
