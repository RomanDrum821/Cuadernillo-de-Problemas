#include <stdio.h>
#include <stdlib.h>

float area(float,float);

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
        printf( "\n   El Area del triangulo es: %f\n", area(base,altura));
        contador++;
        printf( "\n   Introduzca base (real): " );
        scanf( "%f", &base );
        printf( "\n   Introduzca altura (real): " );
        scanf( "%f", &altura );
    }
    printf( "\n   Ha calculado el Area de %d triangulos.",contador);

    return 0;
}
float area(float base,float altura)
{
	float res= base * altura / 2 ;
	return res;
}
