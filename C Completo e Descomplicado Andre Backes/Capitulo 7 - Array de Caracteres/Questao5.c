/* 5) Faça um programa que leia uma string e a inverta. A string invertida deve
 ser armazenada na mesma variável. Em seguida, imprima a string
 invertida*/

 #include <stdio.h>
 #include <string.h>

 int main(){
    char str[50];
    char strInvert[50];

    printf("Digite uma string: ");
    gets(str);

    int tras;
    int j = 0;
    for(int i = 0; i < 50; i++){
        if(str[i] == '\0'){
            tras = i;
            tras = tras - 1;
            break;
        }
    }

    strcpy(strInvert, str);

    while(tras != -1){
        str[j] = strInvert[tras];
        if(str[j] == '\0') break;
        tras--;
        j++;
    }

    printf("%s", str);
    

    return 0;
 }
