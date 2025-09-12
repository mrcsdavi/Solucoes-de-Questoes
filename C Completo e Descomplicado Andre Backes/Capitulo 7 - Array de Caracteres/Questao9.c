#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int cont = 0;

    printf("Digite a primeira string: ");
    gets(str1);
    printf("Digite a segunda string: ");
    gets(str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (int i = 0; i <= len1 - len2; i++) {
        int k = 0;
        // compara a partir de i em str1 com str2 inteiro
        while (k < len2 && str1[i + k] == str2[k]) {
            k++;
        }
        if (k == len2) { 
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}
