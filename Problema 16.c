#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	int numero;
	int tope;
	
    printf( "\n Ingrese el numero hasta el cual desea conocer su sucesion en numeros pares: \n " );
	scanf("%d",&tope);
	
    for ( numero = 2 ; numero <= tope ; numero += 2 )
    {
        printf( "%d ", numero );
    }

    return 0;
}
