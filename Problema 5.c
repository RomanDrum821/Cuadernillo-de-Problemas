#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
	int num1;
	int num2;
	int i;
	
	printf ("Introduzca dos numeros y se mostraran los enteros entre ellos. \n");
    printf ("Introduzca dos numeros enteros comprendidos entre 1 y 1000: \n");
    scanf ("\n %d", &num1);
    scanf ("\n %d", &num2);
	printf ("\n Enteros entre %d y %d \n", num1, num2);

    i = num1;
    do { 
	printf("%d \t", i); i=i+1;
	} 
	while (i<=num2);

    return 0;

}

