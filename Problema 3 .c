#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{

 float a, b, c;
 	printf("Ingrese el primer numero: \n");
	scanf("%f",&a);
	printf("Ingrese el segundo numero: \n");
	scanf("%f",&b);
	printf("Ingrese el tercer numero: \n");
	scanf("%f",&c);
 if (a<b)
 	{
 		if (a<c)
 			{
 				if (b<c)
 					printf (" El orden es %f, %f, %f. \n",a,b,c);
 				else
					printf (" El orden es %f, %f, %f.\n",a,c,b);
			 }
 		}
else
 	{
		 if (b<c)
 			{
 				if (a<c)
 					printf (" El orden es %f, %f, %f. \n",b,a,c);
 				else 
					printf (" El orden es %f, %f, %f. \n",b,c,a);
 			}
 	}

	return 0;	
}
