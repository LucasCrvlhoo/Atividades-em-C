#include <stdio.h> 

int main() {

    //Declaração de variáveis
    float consumo, soma = 0, media; 
    int i; 

    //Repetições e condições de consumo
for(i = 1; i <= 5; i++){

    printf("Digite o consumo do morador %d (m3):",i); 
    scanf("%f", &consumo); 
      
if(consumo <= 20){ 

    printf("Consumo dentro do limite\n"); 

    }
else{ 

    printf("Consumo acima do limite\n"); 
        
    } 
        soma = soma + consumo; 
} 

    media = soma / 5; 

    //Consumo Geral
    printf("\nConsumo medio geral:%.2fm3\n", media); 

    return 0; 

} 
