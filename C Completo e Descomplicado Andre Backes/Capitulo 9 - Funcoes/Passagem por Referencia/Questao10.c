#include <stdio.h>
#include <string.h>

int palindromo(char *p, int n) {
    char invertida[n];
    int i, j;

    // Encontrar o tamanho real da string
    int tamanho = strlen(p);

    // Inverter a string
    for (i = 0, j = tamanho - 1; i < tamanho; i++, j--) {
        invertida[i] = p[j];
    }
    invertida[tamanho] = '\0'; // termina a string

    // Comparar as duas strings
    if (strcmp(p, invertida) == 0)
        return 1; // é palíndromo
    else
        return 0; // não é palíndromo
}

int main() {
    char palavra[20];

    printf("Digite uma palavra: ");
    setbuf(stdin, NULL);
    scanf("%s", palavra);

    if (palindromo(palavra, 20))
        printf("É palíndromo!\n");
    else
        printf("Não é palíndromo.\n");

    return 0;
}
