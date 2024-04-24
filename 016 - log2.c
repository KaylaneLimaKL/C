#include <stdio.h>

float log2(float n) {
    if (n <= 1) {
        return 0;
    } else {
        return 1 + log2(n / 2.0);
    }
}

int main() {
    float n;
    printf("Informe um número positivo: ");
    scanf("%f", &n);

    // Calcula o piso do logaritmo de n na base 2
    float resultado = log2(n);
    printf("O piso do log2 de %.2f é: %.2f\n", n, resultado);

    return 0;
}
