#include <stdio.h>

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    } else {
        return 0;
    }
}

int main() {
    int a, b, valor;
    printf("Insira dois valores: ");
    scanf("%d %d", &a, &b);
    valor = maior(a, b);
    if (valor != 0) {
        printf("O maior eh %d\n", valor);
    } else {
        printf("Valores iguais\n");
    }
}