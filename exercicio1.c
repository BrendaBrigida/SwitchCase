#include <stdio.h>

main(){

   //Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence

   int DDD;

   printf("digite o DDD: "); 
   scanf("%d", &DDD);

   switch(DDD){

     case 61:
         printf("\nBrasilia");
         break;
     case 71:
         printf("\nSalvador");     
         break;
     case 11:
         printf("\nSão Paulo");
         break;
     case 21:
         printf("\nRio De Janeiro");
         break;
     case 32:
        printf("\nJuiz De Fora");
         break;
     case 19:
        printf("\nCampinas");   
         break;
     case 27:
        printf("Vitoria");
         break;
     case 31:
        printf("\nBelo Horizonte"); 
        break;

     default:
        printf("uma cidade no Brasil sem identificação"); 

   }

}