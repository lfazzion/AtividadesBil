#include <stdio.h>

int main() {
    int a, b;
    printf("Insira 2 numeros inteiros: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("O maior eh %d\n", a);
    } else if (b > a) {
        printf("O maior eh %d\n", b);
    } else {
        printf("Os dois são iguais %d\n");
    }

    return 0;
}