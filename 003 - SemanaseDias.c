#include <stdio.h>

/*2. Faça um programa que leia o número de dias decorrido em um evento e exiba na tela o mesmo valor
expresso em números de semanas e número de dias. Por exemplo, se um usuário fornecer o valor 19, o
programa deve exibir: “2 semanas e 5 dias”.*/

int main (){
  int dias = 0, semanas = 0;

  printf("\n > ");
  scanf("%d", &dias);
  
  if (dias % 7 == 0){
    semanas = dias/7;
    if (semanas > 1){
      printf("\n%d semanas\n", semanas);
    }
    printf("\n%d semana\n", semanas);
  } else{
    semanas = dias  / 7;
    dias = dias % 7;

 // Configuração de saída
    
    if (dias == 1 ) printf("%d dia", dias);
    
    if (semanas == 0 && dias > 1 ) printf("\n%d dias", dias);
    
    if (semanas == 1 && dias > 1 ) printf("\n%d semana e %d dias", semanas, dias);
    
    if (semanas > 0 && dias == 1) printf("\n%d semanas e %d dias\n", semanas, dias);
      
    if (semanas > 1 && dias > 1) printf("\n%d semanas e %d dias\n", semanas, dias);
  }

  
}
