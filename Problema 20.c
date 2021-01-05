#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
    int x;
	int array[100];
	
	printf("Se muestra un arreglo con los primeros ");
	printf("100 numeros enteros en orden ascendente \n");
	       
    for (x=1; x<=100; x++)
    {
        array[x]=x;
    }
           
    for (x=1;x<=100;x++)
    {
        printf("%d\n",array[x]);
    }
   
    return 0;
}
