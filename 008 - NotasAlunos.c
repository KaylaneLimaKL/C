/*6. Faça um programa que leia a matrícula e as duas notas de um aluno, calcule
a média aritmética e exiba a matrícula, a média, a situação (“aprovado”: média
>= 5.0, “reprovado”: média < 3.0 ou “em final”: média
>=3.0 e <5.0) e a mensagem “parabéns” (caso a média do aluno seja acima de 9.0).
O programa deverá utilizar as seguintes funções: a) para exibir a situação do
aluno. Esta função deverá receber como parâmetro a média do aluno. b) para
exibir a mensagem “parabéns”. Esta função deverá receber a média do aluno como
parâmetro.*/

#include <stdio.h>

int situacao(int matricula, float media) {
  if (media >= 5.00) {
    printf("\nMatrícula: %d\nNota: %.2f\nSituação: Aprovado (a).", matricula, media);
  if (media > 9.00) printf("\nParabéns");
  }
  
  if (media < 3.00) {
    printf("\nMatrícula: %d\nNota: %.2f\nSituação: Reprovado (a).", matricula, media);
  } 
  else if (media >= 3.00 && media < 5.00){
    printf ("\nMatrícula: %d\nNota: %.2f\nSituação: Em final.", matricula, media);
  }
  

    return 0;
}



int main() {
  int matricula = 0;
  float nota1 = 0, nota2 = 0, media = 0;

  printf("\nMatrícula: ");
  scanf("%d", &matricula);
  printf("\nNotas: \n> ");
  scanf("%f", &nota1);
  printf("\n> ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;
  situacao(matricula, media);

  return 0;
}
