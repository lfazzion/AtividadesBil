#include <stdio.h>

int main() {
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}