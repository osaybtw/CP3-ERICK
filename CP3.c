#include <stdio.h>
#include <string.h>
float saldo;
int usuario, opcao;
float saldo = 0;


int main(){
  
    printf("Saldo inicial: R$ %.2f\n\n", saldo);
    
  
    do {
        system("cls || clear");  
        exibirMenu();
        
        
        scanf("%d", &opcao);
        limparBuffer();  
        
        
        
        
        
        if(opcao != 0) {
            printf("\nPressione Enter para continuar...");
            getchar();
        }
        
    } while(opcao != 0);
    
    return 0;

}