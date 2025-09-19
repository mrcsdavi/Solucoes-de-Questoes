/* 15) Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um
 programa que inicialize um dos tipos dessa união e exiba em tela o valor
 do outro tipo*/

 #include <stdio.h>

union tipo{
    short int tipo1;
    char tipo2;
};

 int main(){
    union tipo t;

    t.tipo1 = 200;

    printf("%d\n", t.tipo1);
    printf("%d\n", t.tipo2);
    return 0;
 }
