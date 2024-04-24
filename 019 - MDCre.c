#include <stdio.h>

int mdc(int m, int n) {
    if (n == 0) {
        return m;
    } else {
        return mdc(n, m % n);
    }
}

int main() {
    int m = 60, n = 24;

    printf("O MDC de %d e %d é: %d\n", m, n, mdc(m, n));

    return 0;
}
