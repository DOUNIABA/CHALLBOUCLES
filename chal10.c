#include<stdio.h>
#include<math.h>


int main(){
 int n,j,som,i;
 int p = 0;
 som=0;
for(i=0;i<20;i++){
printf("donnez une nombre:\n ");
scanf("%d",&n);
 
 

if(n==0){
    break;
}

   if(n>0){

p++;

som+=n;


 
}
if (p==10){
printf("la somme est %d :",som);
break;
}

}


 return 0;
}