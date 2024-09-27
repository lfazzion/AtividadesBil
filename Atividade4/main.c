#include <stdio.h>

int main() {
    int valor;

    printf("Insira um inteiro: ");
    scanf("%d", &valor);

    if ((valor % 2 == 0)) {
        printf("O valor eh par\n");
    } else {
        printf("O valor eh impar\n");
    }
}