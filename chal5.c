#include <stdio.h>
#include <stdlib.h>

void convert(int n){
printf("%d" ,n%10);
if (n>=10){
    convert(n/10);
}
}

int main()
{
    int n;
    printf("entrer Nombre :");
    scanf("%d", &n);
    convert(n);

    return 0;

}