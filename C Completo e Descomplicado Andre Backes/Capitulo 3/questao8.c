    /*  8) Leia um valor que represente uma temperatura em graus
    Celsius e apresente-a convertida em graus Fahrenheit. A
    fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a
    temperatura em Fahrenheit e C a temperatura em Celsius.
    */

    #include <stdio.h>

    int main(){

        float C, F;

        scanf("%f", &C);

        F = C * (9.0/5.0) + 32.0;

        printf("%.2f", F);

        return 0;
    }
