#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	int n;

    printf( "\n   Introduzca un numero entero: ");
    scanf( "%d", &n );

    if ( n >= -9 && n <= 9 )
        printf( "\n   Tiene 1 digito.");
    else
        if ( n >= -99 && n <= 99 )
            printf( "\n   Tiene 2 digitos.");
        else
            if ( n >= -999 && n <= 999 )
                printf( "\n   Tiene 3 digitos.");
            else
                printf( "\n   Tiene mas de 3 digitos.");
	
	
	return 0;
}
