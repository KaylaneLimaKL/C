/* Faça um programa que calcule e mostre a área e o perímetro de uma sala retangular cujas medidas são
fornecidas pelo usuário.*/

#include <stdio.h>

int main (){
  int base = 0, altura = 0, area = 0, perimetro = 0;

  // input do usuário
  printf("\n> ");
  scanf ("%d", &base);
  printf("\n> ");
  scanf ("%d", &altura);

  // operações area e perimetro 
  area = base*altura;
  perimetro = 2*base + 2*altura;

  //output
  printf("Área: %d \nPerímetro: %d\n ", area, perimetro);
  return 0;
}
