#include <stdio.h>

int main() {
    float a, b, c, media;

    printf("Insira 3 valores: ");
    scanf("%f %f %f", &a, &b, &c);
    media = (a + b + c) / 3;

    printf("A media entra a, b e c eh: %.1f\n", media);
    return 0;
}