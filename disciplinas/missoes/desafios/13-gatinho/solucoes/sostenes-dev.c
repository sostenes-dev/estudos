#include <stdio.h>

int main(void) {
    double galho, escada, diferenca;

    if (scanf("%lf %lf", &galho, &escada) != 2) {
        return 1;
    }

    if (escada >= galho) {
        printf("Alcanca\n");
    } else {
        diferenca = galho - escada;
        printf("Faltam: %.2f\n", diferenca);
    }

    return 0;
}
