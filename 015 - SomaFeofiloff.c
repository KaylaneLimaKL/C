#include <stdio.h>

int soma(int indice, int v[]) {
    int vsoma = 0;
    if (indice == 0) return 0;
    else {
        vsoma = soma(indice - 1, v);
        if (v[indice - 1] > 0) vsoma += v[indice - 1];
        return vsoma;
    }
}

int main(void) {
    int indice;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &indice);

    int v[indice];

    printf("Informe os valores do vetor:\n");
    for (int i = 0; i < indice; i++) {
        scanf("%d", &v[i]);
    }

    int resultado = soma(indice, v);
    printf("A soma dos elementos positivos é: %d\n", resultado);

    return 0;
}
