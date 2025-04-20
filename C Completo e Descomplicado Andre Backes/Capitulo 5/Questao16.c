/*16) Em matemática, o número harmônico designado por Hn
 define-se como o enésimo termo da série harmônica. Ou seja:
 Apresente um programa que calcule o valor de
 qualquer Hn.*/

 #include <stdio.h>

 int main(){

    int n;
    float harm = 0;

    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) harm = harm + 1.0/i;

    printf("Numero harmonico: %.2f ", harm);

    return 0;
 }
