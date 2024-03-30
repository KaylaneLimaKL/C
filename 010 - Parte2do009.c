/*7. Faça um programa que receba dois números X e Y, sendo X < Y. Calcule e mostre a soma dos números
pares desse intervalo de números, incluindo os números digitados.

8- Refaça o programa anterior, agora sem considerar que necessariamente X<Y. Caso X>Y, considere o
intervalo como sendo de Y até X. */

#include <stdio.h>

int main (){
  int x  = 0, y = 0, soma = 0;

  printf("\n> ");
  scanf ("%d", &x);  
  printf("\n> ");
  scanf ("%d", &y);

  if (x < y){
    for (int i = x; i <= y; i++){
      if (i % 2 == 0){
        soma += i;
        printf("%d\n", soma);
      }
    }
  }
  if (x > y){
    for (int i = y; i <= x; i++){
      if (i % 2 == 0){
        soma += i;
        printf("%d\n", soma);
      }
    }
  }
  return 0;
}
