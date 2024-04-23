#include <stdio.h>

int soma(int tam, int vet[]) {
    if (tam == 0) {
        return 0;
    } else {
        return vet[tam - 1] + soma(tam - 1, vet);
    }
}

int main() {
    int tam;

    printf("Tam: ");
    scanf("%d", &tam);

    int vet[tam];

    printf("N: ");
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);
    }

    int resultado = soma(tam, vet);
    printf("Soma: %d\n", resultado);

    return 0;
}
