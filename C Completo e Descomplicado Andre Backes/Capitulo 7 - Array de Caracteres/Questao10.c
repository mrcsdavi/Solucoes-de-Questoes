#include <stdio.h>
#include <string.h>

int main() {
    char str[50];

    printf("Digite a string: ");
    fgets(str, 50, stdin); // mais seguro que gets

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("String em maiúsculas: %s", str);

    return 0;
}
