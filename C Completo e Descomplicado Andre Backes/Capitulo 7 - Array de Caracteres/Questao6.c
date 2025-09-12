/*6) Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui.
 Entre com um caractere (vogal ou consoante) e substitua todas as vogais da
 palavra dada por esse caractere. Ao final, imprima a nova string e o
 número de vogais que ela possui*/

 #include <stdio.h>
 #include <string.h>

 int main(){
    char str[50], carac;
    printf("Digite uma string: ");
    gets(str);

    printf("Digite um caractere para substituir todas as vogais da palavra: ");
    scanf("%c", &carac);

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                str[i] = carac;
        }
    }
    
    printf("%s", str);

    return 0;
 }
