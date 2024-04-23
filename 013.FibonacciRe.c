#include <stdio.h>

int fibonacci(int tam) {
    if (tam == 1) {
        return 1; 
    }
    if (tam == 2) {
        return 1; 
    } else {
        return fibonacci(tam - 1) + fibonacci(tam - 2);
    }
}

int main(void) {
    int tam;

    printf(":: ");
    scanf("%d", &tam);


      for (int i = 1; i <= tam; i++) {
          printf("%d ", fibonacci(i));
      }
      printf("\n");

    return 0;
}
