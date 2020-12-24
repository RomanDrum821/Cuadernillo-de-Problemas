#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	
	float x;
	float y;
	float z;
	printf("Ingrese el primer numero: \n");
	scanf("%f",&x);
	printf("Ingrese el segundo numero: \n");
	scanf("%f",&y);
	printf("Ingrese el tercer numero: \n");
	scanf("%f",&z);
	
	if ( x >= y && y >= z )
        printf( "\n   %f es el mayor.",x );
    else
        if ( y > z )
            printf( "\n   %f es el mayor.",y );
        else
            printf( "\n   %f es el mayor.",z );
 
    getch(); /* Pausa */
	
	return 0;	
}
