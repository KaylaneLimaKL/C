/*7. Faça um programa que receba dois números X e Y, sendo X < Y. Calcule e mostre a soma dos números
pares desse intervalo de números, incluindo os números digitados.*/

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
  return 0;
}
