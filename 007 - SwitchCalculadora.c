/*5. Faça um programa que leia dois números e um operador (caracter ‘+’, ‘-’, ‘*’ ou ‘/’) e realize a operação
correspondente entre os operandos dados.*/

#include <stdio.h>

int main (){
  float x = 0, y = 0;
  int operacao = 0;

  printf("\n> ");
  scanf ("%f", &x);
  printf("\n> ");
  scanf("%f", &y);
  printf ("\n\nEscolha a operação abaixo: \nsoma = 1\nsubtração= 2\nmultiplicação = 3\ndivisão = 4\n\n");
  scanf("%d", &operacao);

  if(operacao == 4 && y == 0){
    printf("Operação inválida, denominador = 0\n");
    return 1;
  }

  switch (operacao){
    case 1: 
      printf("\nSoma: %.2f + %.2f = %.2f\n", x, y, x+y);
      break;  
    case 2: 
      printf("\nSubtração: %.2f - %.2f = %.2f\n", x, y, x-y);
      break;
    case 3:
      printf("\nMultiplicação: %.2f * %.2f = %.2f\n", x, y, x*y);
    break;
    case 4:
      printf("\nDivisão: %.2f / %.2f = %.2f\n", x, y, x/y);
    break;
  }


  return 0;
}
