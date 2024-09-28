#include <stdio.h>

int main() {
    int i = 0, j = 0;
    int matriz[2][2] = {};

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite o valor da posicao %d %d: \n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}