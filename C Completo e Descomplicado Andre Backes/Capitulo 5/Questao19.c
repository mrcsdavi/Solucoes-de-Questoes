#include <stdio.h>

int main() {
    int numerador = 1, denominador = 1;
    float S = 0;

    while(denominador <= 55 && numerador <= 99){
        printf("deno = %d\n", numerador);
        S += (float) numerador/denominador; 
        
        numerador = numerador+2;
        denominador++;
    }
  
    printf("S = %.2f\n", S); 
    return 0;
}
