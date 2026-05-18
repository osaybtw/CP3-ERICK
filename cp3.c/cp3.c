#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void exibirMenu(){
    printf("\n1 - Ver saldo\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

void limparBuffer(){
    while(getchar() != '\n');
}

int usuario, opcao;
float saldo = 0;

int main(){

    printf("Sistema ATM iniciado!\n");
    printf("Operacao realizada com sucesso!\n");

    printf("======================================================\n");
    printf("================  CAIXA MASSA DA FIAP ================\n");
    printf("======================================================\n");
    printf("======  Seu saldo e de: R$%.2f =======================\n", saldo);
    printf("======================================================\n");

    printf("Saldo inicial: R$ %.2f\n\n", saldo);

    do {

        if(opcao < 0){
            printf("Opcao invalida!\n");
        }

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