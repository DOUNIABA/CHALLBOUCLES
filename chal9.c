#include<stdio.h>
#include<stdlib.h>
int main (){


int N,pow;
 printf("donner un nombre: \n"); 
scanf("%d",&N); 
printf("donner puissance : \n");
 scanf("%d",&pow);
 int puissance = N; 
 if (N>0 && pow >= 0){

 while ( pow > 1 ){ 
puissance *= N; 
pow--; } 
printf("%d\n", puissance);
 } else {

printf ("error");
}
return 0;
}
