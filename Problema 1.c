#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{

	float x ;
	float y ;
	printf("Ingrese el primer numero: \n");
	scanf("%f",&x);
	printf("Ingrese el segundo numero: \n");
	scanf("%f",&y);
	
	//bloque para el veradero o falso 
	if (x == y){
	printf 	("Los numeros que ingreso son iguales");
	}else{
	printf 	("Los numeros que ingreso son diferentes");
	}
	
	
	
	return 0;
}
