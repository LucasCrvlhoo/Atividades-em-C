#include <stdio.h> 

int main() { 

    //Declaração de variáveis
    int passos, total = 0, horas = 0; 

    //Repetição
  while (total <10000) { 

    printf("Digite o total de passos dados por hora\n"); 
    scanf("%d", &passos); 

    //Total de passos e horas
total = total + passos; 
horas++; 
} 

  printf("Total de passos: %d, Total de horas: %d\n", total, horas); 

return 0; 

} 
