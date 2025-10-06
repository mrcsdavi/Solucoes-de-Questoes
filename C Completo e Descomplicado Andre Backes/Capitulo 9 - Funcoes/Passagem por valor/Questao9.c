/* 9) Elabore uma função que receba três notas de um aluno como
 parâmetros e uma letra. Se a letra for “A”, a função deverá
 calcular a média aritmética das notas do aluno; se for “P”,
 deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne
 a média calculada para o programa principal.*/

#include <stdio.h>

struct aluno{
    float nota1, nota2, nota3;
};

typedef struct aluno alu;

float mediaEscolha(float nota1, float nota2, float nota3, char letra){
    if(letra == 'A'){
        return (nota1+nota2+nota3)/3;
    }else if(letra == 'P'){
        return (nota1*5 + nota2*3 + nota3*2)/10;
    }else{
        return 0;
    }
}

int main(){
    alu a;
    char letra;

    printf("Digite 3 notas de um aluno: ");
    scanf("%f %f %f", &a.nota1, &a.nota2, &a.nota3);
    printf("Digite uma letra A para Aritimetica ou P para Ponderada: ");
    setbuf(stdin, NULL);
    scanf("%c", &letra);

    printf("A media calculada eh de: %.2f", mediaEscolha(a.nota1, a.nota2, a.nota3, letra));

    return 0;
}
