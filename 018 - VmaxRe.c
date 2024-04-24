#include <stdio.h>

int maxR(int ind, int v[]) {
    if (ind == 0) {
        return 0;
    } else {
        int maxV = maxR(ind - 1, v);
        if (v[ind - 1] > maxV) {
            maxV = v[ind - 1];
        }
        return maxV;
    }
}

int main(void) {
    int ind;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &ind);
    int v[ind];

    printf("Informe os elementos do vetor:\n");
    for (int i = 0; i < ind; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    int maximo = maxR(ind, v);
    printf("O maior valor do vetor é: %d\n", maximo);

    return 0;
}
