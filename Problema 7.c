#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	char letra;

    printf( "\n   Introduzca una letra: " );
    scanf( "%c", &letra );

    if ( letra == 'a' || letra == 'A' ||
         letra == 'e' || letra == 'E' ||
         letra == 'i' || letra == 'I' ||
         letra == 'o' || letra == 'O' ||
         letra == 'a' || letra == 'U' )
        printf( "\n   Es una vocal" );
    else
        printf( "\n   No es una vocal" );
	
	return 0;
}
