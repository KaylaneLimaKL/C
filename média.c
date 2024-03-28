#include <stdio.h>

int main (){

  float x = 0, soma = 0, med1;

  printf("Quantos valores da média 1: \n\n");
  scanf("%f", &med1);
  for (int i = 1; i<= med1; i++){
    printf("\n> ");
    scanf ("%f", &x);
    soma += x;
  }
  med1 = soma/med1;
  printf("%.2f", med1);
  return 0;
}