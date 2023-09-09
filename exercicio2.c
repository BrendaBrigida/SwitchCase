#include <stdio.h>

main(){

    /*Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche
     Considere que a cada execução somente será calculado um item.*/

    float ValoraSerPago = 0;
    int ItemPedido, Quantidade;

    printf("Digite o ItemPedido: ");
    scanf("%d", &ItemPedido);
    
    
    printf("Digite a Quantidade: ");
    scanf("%d", &Quantidade);

     switch(ItemPedido){

        case 100:
             printf("\nCachorro quente");
             ValoraSerPago = 10.10 * Quantidade;
             break;
        case 101:    
             printf("Bauru simples");
             ValoraSerPago = 8.30 * Quantidade;
        case 102:
             printf("Bauru c/ovo");
             ValoraSerPago = 8.50 * Quantidade;
             break;     
        case 103:
            printf("Hamburger");
            ValoraSerPago = 12.50 * Quantidade;
             break;
        case 104:
            printf("Cheeseburger");
            ValoraSerPago = 13.25 * Quantidade;
            break;
    }

   printf("Valor a ser pago: R$ %.2f\n", ValoraSerPago);


}