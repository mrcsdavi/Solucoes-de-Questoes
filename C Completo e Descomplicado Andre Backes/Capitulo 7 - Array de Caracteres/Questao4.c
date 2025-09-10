/*4) Faça um programa que leia uma string e a imprima de trás para a frente*/

#include <stdio.h>

int main(){
    char str[10];
    printf("Digite uma string: ");
    gets(str);

    int tras;
    for(int i = 0; i < 10; i++){
        if(str[i] == '\0'){
            tras = i;
            tras = tras - 1;
            break;
        }
    }

    while(tras != -1){
        printf("%c", str[tras]); 
        tras--;          
    }
            
    return 0;
}
