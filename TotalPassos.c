#include <stdio.h> 

int main() { 

int passos, total = 0, horas = 0; 

  while (total <10000) { 

    printf("Digite o total de passos dados por hora\n"); 
    scanf("%d", &passos); 

total = total + passos; 
horas++; 
} 

  printf("Total de passos: %d, Total de horas: %d\n", total, horas); 

return 0; 

} 
