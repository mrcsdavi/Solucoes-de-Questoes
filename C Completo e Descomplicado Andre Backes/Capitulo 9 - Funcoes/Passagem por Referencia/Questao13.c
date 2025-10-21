#include <stdio.h>

void ordenar(int *v, int n) {
    int aux;

    // Algoritmo de ordenação simples (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    // Exibir o vetor ordenado
    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int vetor[100]; // tamanho máximo arbitrário

    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &n);

    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &vetor[i]);

    ordenar(vetor, n);

    return 0;
}
