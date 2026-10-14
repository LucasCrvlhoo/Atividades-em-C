#include <stdio.h> 

int main() { 

    float saldo = 0, moeda; 

    printf("Qual é o valor da moeda que deseja depositar?"); 
    scanf("%f", &moeda); 

while(moeda !=0) { 

  if (moeda == 0.50 || moeda == 1.00 || moeda == 2.00) { 
  
saldo = saldo + moeda; 

    printf("Saldo atual: R$ %.2f\n", saldo); 

} 
  else { 

    printf("Digite um valor válido\n"); 

} 
  
  printf("Digite outra moeda (0 para sair):"); 
  scanf("%f", &moeda); 

} 

  printf("Saldo atual: R$ %.2f\n", saldo); 
  
  return 0; 

} 

 
