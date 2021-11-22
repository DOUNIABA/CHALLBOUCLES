#include<stdio.h>
#include<math.h>


int main(){
 int N,j,som,i;
 int A = 0;
 som=0;
for(i=0;i<20;i++){
printf("donnez un nombre:\n ");
scanf("%d",&N);
 
 

if(N==0){
    break;
}

   if(N>0){

A++;

som+=N;


 
}
if (A==10){
printf("la somme est %d :",som);
break;
}

}


 return 0;
}