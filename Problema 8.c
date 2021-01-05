#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	int numero;

    printf( "\n   Introduzca un numero entero: ");
    scanf( "%d", &numero );

    if ( numero % 3 == 0 )
        printf( "\n   Es multiplo de 3");
    else
        printf( "\n   No es multiplo de  3");
	
	
	return 0;
}
