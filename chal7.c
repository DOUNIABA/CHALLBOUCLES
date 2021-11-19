#include <stdio.h>
int main(){

int n;
int Un;
int U0 = 0;
int U1 = 1;
printf ("donner nombre:\n");

scanf ("%d", &n);
if (n==0 || n==1)
{
printf ("Un = %d", Un);
}
else
{
for (int i=2;i<=n;i++)
{
    U0= Un;
    U1 = U0;
    Un = U0 + U1;


printf ("U%d = %d\n",i, Un);
}
}


 return 0;
}
