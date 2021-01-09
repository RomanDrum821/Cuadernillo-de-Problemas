#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
    float a;
    float b;
    
    printf("Porfavor ingrese dos numeros de los cuales"); 
	printf("desea concer su direccion de memoria: \n");
    
    scanf("%f",&a);
    scanf("%f",&b);
    
    printf("%f\n",a);
    printf("%p\n",&a);
    printf("%f\n",b);
    printf("%p\n",&b);
    
    printf("Porfavor vuelva a ingresar dos numeros de los cuales"); 
	printf("desea concer su direccion de memoria: \n");
    
	 scanf("%f",&a);
    scanf("%f",&b);
    
    printf("%f\n",a);
    printf("%p\n",&a);
    printf("%f\n",b);
    printf("%p\n",&b);
	printf("Listo: \n");
   
    return 0;
}
