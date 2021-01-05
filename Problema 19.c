#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	int numero;

    printf( "\n   Introduzca un numero entero (1-10): " );
    scanf( "%d", &numero );

    if ( numero >= 1 && numero <= 10 )

        switch ( numero )
        {
            case  1 : printf( "\n   uno" );
                      break;
            case  2 : printf( "\n   dos" );
                      break;
            case  3 : printf( "\n   tres" );
                      break;
            case  4 : printf( "\n   cuatro" );
                      break;
            case  5 : printf( "\n   cinco" );
                      break;
            case  6 : printf( "\n   seis" );
                      break;
            case  7 : printf( "\n   siete" );
                      break;
            case  8 : printf( "\n   ocho" );
                      break;
            case  9 : printf( "\n   nueve" );
                      break;
            case 10 : printf( "\n   diez" );
        }

    else
        printf( "\n   ERROR: El numero debe ser >= 1 y <= 10." );
 
    return 0;
}
