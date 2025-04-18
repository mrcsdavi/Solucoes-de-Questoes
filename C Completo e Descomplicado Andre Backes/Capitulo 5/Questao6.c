/* 6) Faça um programa que mostre uma contagem regressiva na
 tela, iniciando em 10 e terminando em 0. Mostre uma
 mensagem “FIM!” após a contagem.*/

#include <stdio.h>

int main(){

    int i = 10;
    while(i != -1){
        printf("%d \n", i);
        i--;        
    }

    return 0;
}
/*
 OUTRA FORMA FAZENDO COM DUAS VARIAVEIS

 #include <stdio.h>
 int main(){
    int a = 10;
    int i = 0;

    while(i <= 10){
        printf("%d \n", a);
        a--;
        i++;        
    }
 
    return 0;
 }


*/
