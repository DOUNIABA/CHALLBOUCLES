Algorithme multiplication_nombre

VARIABLES

  nb EST_DU_TYPE NOMBRE

  i EST_DU_TYPE NOMBRE

DEBUT_ALGORITHME

  AFFICHER "entrer un nombre"

  LIRE nb

  POUR i ALLANT_DE 1 A 10 

  DEBUT_POUR

  AFFICHERCALCUL  nb * i 

  AFFICHER "\n"

    FIN_POUR

FIN_ALGORITHME


                  ----------------------------------------------------------------------------

#include <stdio.h>

int main()
{

int nb , i , mul;

printf("entrer un nombre:\n");

 scanf("%d",&nb);
 for(i=1;i<=10 ;i++){
    mul=nb*i;

printf("mul=%d \n",mul);
     
 }


    return 0;
}