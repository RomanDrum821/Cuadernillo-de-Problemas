#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
    int T; 
	int i=1;
	
    printf ("Indique la tabla que desea conocer (de 1 a 10): ");
    scanf ("%d", &T);
    
    printf("Tabla del %d \n", T);
    
    while (i<=10){
	printf ("%d * %d = %d \n",T, i, T*i); i=i+1;
	}
	
    return 0;
}


