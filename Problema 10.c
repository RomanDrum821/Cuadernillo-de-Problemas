#include <stdio.h>
#include <stdlib.h>

float area(float);

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

    printf( "\n   El Area de un cubo de arista %f es: %f", arista, area(arista) );
	
	
	return 0;
}

float area(float arista)
{
	float res= 6 * pow( arista, 2 ) ;
	return res;
}
