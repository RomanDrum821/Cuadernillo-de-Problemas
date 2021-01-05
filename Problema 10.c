#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	float arista;

    printf( "\n   Introduzca arista de el cubo: " );
    scanf( "%f", &arista );


    while ( arista <= 0 )
    {
        printf( "\n   ERROR: La arista debe ser mayor que cero." );
        printf( "\n\n   Introduzca arista: " );
        scanf( "%f", &arista );
    }

    printf( "\n   El Area de un cubo de arista %f es: %f", arista, 6 * pow( arista, 2 ) );
	
	
	return 0;
}

