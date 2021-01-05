#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{	
	char vocal;

    printf( "\n   Introduzca una vocal minuscula: ");
    scanf( "%c", &vocal );

    switch ( vocal )
    {
        case 'a' : printf( "\n   En mayuscula es: A" );
                   break;
        case 'e' : printf( "\n   En mayuscula es: E" );
                   break;
        case 'i' : printf( "\n   En mayuscula es: I" );
                   break;
        case 'o' : printf( "\n   En mayuscula es: O" );
                   break;
        case 'u' : printf( "\n   En mayuscula es: U" );
                   break;
         default : printf( "\n   ERROR: '%c' no es una vocal minscula.", vocal);
   }
   
   return 0;
   
}
