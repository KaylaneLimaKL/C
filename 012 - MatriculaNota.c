/*
Seu programa deve:
- ler a matrícula de um aluno X
- ler o número x de trabalhos desse aluno
- ler as x notas do aluno, calculando a média
- exibir a matrícula e média do aluno
A leitura de um valor de matrícula igual a 0 (ZERO) indica o final da entrada de dados.*/

#include <stdio.h>

int main (void){

  int matricula = 0, trabalhos = 0;
  float notas, media = 0;

  for (int i = 1; i > 0; i++){
    printf("\n\nMatrícula: ");
    scanf("%d", &matricula);
    printf("\nNúmero de trabalhos: ");
    scanf ("%d", &trabalhos);
    if (matricula == 0){
      return 0;    
    }
    for (int i = trabalhos; i > 0; i--){
      printf("Notas : ");
      scanf("%f", &notas);
      media += notas;
    }
    media = media /trabalhos;
    printf("\nMatrícula: %d\nMédia: %.2f", matricula, media);
  }
  return 0;
}
