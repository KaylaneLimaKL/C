#include <stdio.h>

/*1. Faça um programa que obtenha o dia de retirada e o dia da entrega de um livro da biblioteca (ambos no
mesmo mês) e informe quantos dias o livro ficou emprestado.*/

int main (){
  int retDia, devDia;
  printf("\n> ");
  scanf ("%d", &retDia);
  printf("\n> ");
  scanf ("%d", &devDia);

  printf("%d", devDia-retDia);

}
