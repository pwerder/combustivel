#include <stdio.h>
#include <stdlib.h>

int main()
{

   float pletanol, plgaso, comp, precof;
   int escolha;


   printf("Digite o preco do etanol: ");
   scanf("%f", &pletanol);

   printf("Digite o preco da gasolina: ");
   scanf("%f", &plgaso);  


   comp = plgaso * 0.70;

  
   if (pletanol > comp) {
       printf("A gasolina e mais barata \n");
   }
   else {
       printf("O etanol e mais barato \n");
   }
  

   printf("Escolha o combustivel [1] etanol  [2] gasolina \n");
   scanf("%d", &escolha);

   float litro;

   if (escolha == 1) {
       printf("quantidade de litro do etanol: ");
       scanf("%f", &litro);
       printf("O valor se cobrado é %.2f", litro * pletanol);
   }else if (escolha == 2){
       printf("quantidade de litro da gasolina: ");
       scanf("%f", &litro);
       printf("O valor se cobrado é %.2f", litro * plgaso);
   }
  
   printf("\n");
  
}


