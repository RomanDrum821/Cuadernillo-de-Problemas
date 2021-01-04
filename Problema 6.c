#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	int auxiliar;
	int variable1;
	int variable2;

    printf( "\n   Introduzca el valor de v1: " );
    scanf( "%d", &variable1 );
    printf( "\n   Introduzca el valor de v2: " );
    scanf( "%d", &variable2 );
    printf( "\n   Intercambiando los valores..." );

    auxiliar = variable1;
    variable1 = variable2;
    variable2 = auxiliar;

    printf( "\n\n   Ahora, el valor de v1 es: %d", variable1 );
    printf( "\n\n   Ahora, el valor de v2 es: %d", variable2 );
	
	return 0;
}

