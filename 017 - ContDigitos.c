#include <stdio.h>

int digitos(int n) {
    if (n < 10) {
        return 1;
    }
    return 1 + digitos(n / 10);
}

int main(void) {
    int n;
    printf("Informe um valor: ");
    scanf("%d", &n);
    printf("A quantidade de dígitos é: %d\n", digitos(n));
    return 0;
}
