#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	int x,tabla[10];
    int sum,res,mul,div;
           
    for (x=0;x<10;x++)
    {
        printf("Introduzca n�mero\n");
        scanf("%d",&tabla[x]);
    }
           
    sum=tabla[0];
    res=tabla[0];
    mul=tabla[0];
    div=tabla[0];
           
    for (x=1;x<10;x++)
    {
        sum=sum+tabla[x];
        res=res-tabla[x];
        mul=mul*tabla[x];
        div=div/tabla[x];
    }
           
    printf("Suma: %d\n",sum);
    printf("Resta: %d\n",res);
    printf("Multiplicaci�n: %d\n",mul);
    printf("Divisi�n: %d\n",div);
   
    return 0;
}
