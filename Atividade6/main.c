#include <stdio.h>

int main() {
    int i = 0, j = 0;
    int matriz[2][2] = {};
    for (; i < 2; i++) {
        for (; j < 2; j++) {
            printf("Digite o valor da posicao %d %d: \n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            printf("i: %d, j: %d\n", i, j);
        }
    }
    i = 0;
    j = 0;
    for (; i < 2; i++) {
        for (; i < 2; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}