
Algorithme pyramide_étoile

FONCTIONS_UTILISEES
VARIABLES
nbr EST_DU_TYPE NOMBRE
i EST_DU_TYPE NOMBRE
j EST_DU_TYPE NOMBRE
k EST_DU_TYPE NOMBRE

DEBUT_ALGORITHME
AFFICHER "entrere un nnombre"
LIRE nbr
POUR nbr ALLANT_DE 1 A 10
DEBUT_POUR
POUR j ALLANT_DE 1 A n-i
AFFICHER " "
DEBUT_POUR
POUR k ALLANT_DE 1 A i*2-1
AFFICHER "*"
DEBUT_POUR
AFFICHER "\n"
				
FIN_POUR
			
FIN_POUR
		
FIN_POUR
FIN_ALGORITHME

        -------------------------------------------------------------------------------------

#include <stdio.h>
   int main() {
   int  n;
 
        printf ("nombres de lignes :\n");
scanf ("%d", &n);
for(int i=1; i<=n; i++){
 
for (int j=1 ; j<=n-i; j++){
   printf(" ");
}
for(int k=1;k<=i*2-1;k++){
   printf("*");
}
printf("\n");
}
    return 0;
}

      