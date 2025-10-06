/*7) Elabore uma função que receba três números inteiros como
 parâmetro, representando horas, minutos e segundos. A
 função deve retornar esse horário convertido em segundos.*/

#include <stdio.h>

int horario(int horas, int minutos, int segundos){
    int calcSegundos;
    if (horas >= 0 && horas <= 24){
        calcSegundos = horas*3600; // horas em segundos
        if(minutos >= 0 && minutos <= 59){
            calcSegundos = calcSegundos + minutos*60; // minutos em segundos
            if(segundos >= 0 && minutos <= 59){
                calcSegundos = calcSegundos + segundos;
            }
        }
    }
    return calcSegundos;
}

int main(){
    int a, b, c;

    printf("Digite o horario (horas, minutos e segundos): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Segundos: %d", horario(a, b, c));

    return 0;
}
