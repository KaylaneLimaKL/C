/*7.
9. Uma empresa para se tornar conhecida do público jovem, decidiu sortear brindes na entrada de uma festa.
Como não há brinde para todos, seriam premiados apenas os convidados cujo mês de aniversário é divisor do
dia do aniversário. Faça um programa em C que inicialmente leia a quantidade de brindes que serão
distribuídos. Em seguida, para cada convidado que ingressa na festa, o programa deve ler o dia e o mês do
seu aniversário. Se o convidado tem direito ao brinde, o programa deve exibir a mensagem “PARABÉNS”.
Quando não há mais brindes para distribuir, o programa deve exibir a mensagem “PROMOÇÃO
ENCERRADA” e ser encerrado.*/

#include <stdio.h>

int main (){
  int mes = 0, dia = 0, brindes = 0;
  
  printf("\nQuantidade de brindes: ");
  scanf ("%d", &brindes);

  for (int i = brindes; i >= 0;){
    printf("\nDia:  ");
    scanf ("%d", &dia);
    printf("\n Mês: ");
    scanf ("%d", &mes);

    if (i == 0){
      printf("\nPROMOÇÃO ENCERRADA");
      break;
    }

    if (dia % mes == 0){
      printf("\nPARABÉNS\n");
      i--;
    } 
    else {
      printf("\nNÃO TEM DIREITO");
      continue;
    }
  }
  return 0;
}

