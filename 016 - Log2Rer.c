#include <stdio.h>
#include <math.h>

float costum_log2(float n){
    if (n <= 1) {
        return 0;
    } else {
        return 1 + log2(n/2.00);
    }
}

int main(void){
    float n;

    printf("Informe um valor: ");
    scanf("%f", &n);
    printf("O piso do log2 é: %.2f\n", costum_log2(n)); 
    return 0;
}
