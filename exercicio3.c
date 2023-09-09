#include <stdio.h>

main(){

  //Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato, a sobremesa e a bebida

     int prato, sobremesa, bebida;
     int caloria = 0;

     printf("informe o prato: ");
     scanf("%d", &prato);

     printf("informe o sobremesa: ");
     scanf("%d", &sobremesa);
    
     printf("informe o bebida: ");
     scanf("%d", &bebida);
  

      switch(prato){

          case 1:
              printf("\nvegetariano");
              caloria += 180;
              break;
          case 2:   
              printf("\nPeixe");
              caloria += 230;
              break;
          case 3:
               printf("\nFrango");
               caloria += 250;
               break;
          case 4:
               printf("\nCarne:");
               caloria += 350;
               break;
               default:
            printf("Opção de prato inválida.\n");

        }
   

      switch(sobremesa){

          case 1:
              printf("\nAbacaxi");
              caloria += 75;
              break;
          case 2:   
              printf("\nSorvete diet");
              caloria += 110;
              break;
          case 3:
               printf("\nmousse diet");
               caloria += 170;
               break;
          case 4:
               printf("\nmousse de chocolate");
               caloria += 200;
               break;
          default:
            printf("Opção de sobremesa inválida.\n");

      }

      switch(bebida){

          case 1:
              printf("\nCha");
              caloria += 20;
              break;
          case 2:   
              printf("\nSuco de laranja");
              caloria += 70;
          case 3:
               printf("\nSuco de melao");
               caloria += 100;
               break;
          case 4:
               printf("\nRefrigerante diet");
               caloria += 65;
               break;
         default:
            printf("Opção de bebida inválida.\n");

    }  


    printf("A quantidade total de caloria da refeição é: %d caloria\n", caloria);



}