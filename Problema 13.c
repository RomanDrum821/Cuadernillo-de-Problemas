#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	int contador;
    float altura;
	float base;

    printf( "\n   Introduzca base (real): " );
    scanf( "%f", &base );
    printf( "\n   Introduzca altura (real): " );
    scanf( "%f", &altura );

    contador = 0;

    while ( base != 0 && altura != 0 )
    {
        printf( "\n   El Area del triangulo es: %f\n",base * altura / 2 );
        contador++;
        printf( "\n   Introduzca base (real): " );
        scanf( "%f", &base );
        printf( "\n   Introduzca altura (real): " );
        scanf( "%f", &altura );
    }

    printf( "\n   Ha calculado el Area de %d triangulos.",contador);
 
    getch(); /* Pausa */

    return 0;
}
