#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	int numero;

    printf( "\n   Introduzca un numero entero: ");
    scanf( "%d", &numero );
 
    printf( "\n   El numero anterior es: %d", numero - 1 );
    printf( "\n\n   El numero posterior es: %d", numero + 1);
 
 	return 0;   
}
