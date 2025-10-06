/* 10) Escreva uma função que receba dois valores numéricos e um
 símbolo. Esse símbolo representará a operação que se deseja
 efetuar com os números. Assim, se o símbolo for “ + ”, deverá
 ser realizada uma adição, se for “ − ”, uma subtração, se for
 “/”, uma divisão, e, se for “*”, será efetuada uma
 multiplicação. Retorne o resultado da operação para o
 programa principal.*/

#include <stdio.h>

struct numero{
    float numero1;
    float numero2;

};

typedef struct numero n;

float operacao(n num, char simbolo){
    if (simbolo == '+'){
        return num.numero1 + num.numero2;
    }else if(simbolo == '-'){
        return num.numero1 - num.numero2;
    }else if(simbolo == '/'){
        return num.numero1 / num.numero2;
    }else if(simbolo == '*'){
        return num.numero1 * num.numero2;
    }else return 0;
}

int main(){
    float a, b;
    char c;

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);
    n num = {a, b};

    printf("Escolha o tipo da operacao (+ ou - ou / ou *): ");
    setbuf(stdin,NULL);
    scanf("%c", &c);
    
    printf("O calculo entre os dois numeros usando a operacao %c foi de %.2f", c, operacao(num, c));

    return 0;
}
