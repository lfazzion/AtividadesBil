#include <stdio.h>
#include <string.h>

int main() {
    char string[50];
    printf("Digite uma frase: ");
    fgets(string, sizeof(string), stdin);

    if (string[strlen(string - 1)] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    int quantidade = strlen(string);
    printf("Quantidade de caracteres: %d\n", quantidade);

    return 0;
}