/* 10) Considere a seguinte declaração: int a,*b,**c,***d. Escreva um programa
 que leia a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse
 valor utilizando apenas os ponteiros b, c e d. O ponteiro b deve ser usado
 para calcular o dobro, c, o triplo, e d, o quádruplo*/

 #include <stdio.h>

 int main(){
    int a, *b, **c, ***d;

    b = &a;
    c = &b;
    d = &c;
    
    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Valor: %d\n", a);

    printf("Dobro: %d\n", 2* (*b));

    printf("Triplo: %d\n", 3* (**c));
 
    printf("Quadrupulo: %d\n", 4* (***d));

    return 0;
 }
