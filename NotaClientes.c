#include <stdio.h> 

int main() { 

    float nota, soma = 0, media; 

    int i; 

    for(i = 1; i <= 10; i++){ 

        printf("Digite a nota do cliente %d:", i); 

        scanf("%f", &nota); 
      
        soma = soma + nota; 
    } 
  
    media = soma / 10; 

    if(media < 7){ 

        printf("Alerta! media abaixo de 7!\n"); 
    } 
        printf("Media dos clientes: %.2f\n", media); 

    return 0;
} 
