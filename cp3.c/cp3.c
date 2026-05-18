#include <stdio.h>
#include <string.h>
float saldo;
int usuario;
int usuario, opcao;
float saldo = 0;
int main(){
    printf("======================================================\n");
    printf("================  CAIXA MASSA DA FIAP ================\n");
    printf("======================================================\n");
    printf("======  Seu saldo e de: R$%.2f =======================\n", saldo);
    printf("======================================================\n");


}
int main(){
    
  printf("Sistema ATM iniciado!\n");

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