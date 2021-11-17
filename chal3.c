Algorithme nbr_premier
Variables 
nbr:entier
p:entier
i:entier
ecrire (entrer un nombre)
lire (nbr)
pour i allant de 2 à nbr
si (nbr % i<-0)
p+1

si p<>0 ou nbr<-1
ecrire ("n'est pas premier")
sinon 
ecrire("il est premier")
fin sinon 
fin si 
fin si 
fin



#include <stdio.h>

 int main() {
int nbr,P=0, i;
printf("entrez un mombre");
scanf("%d",&nbr);
for(i=2;i< nbr;i++){

if(nbr%i==0){
P++;
break;
}
}

if(P!=0 || nbr ==1 ){
printf(" non premier");
}
else
printf(" premier");



    return 0;
}