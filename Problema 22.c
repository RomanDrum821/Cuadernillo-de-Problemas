#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
  float aux, array[10];
  int i,j,n=10;

  for (i=0;i<n;i++)
  {
    printf("Escriba un numero \n");
    scanf("%f",&array[i]);
  }

  for(i=0;i<n-1;i++)
  {
   for(j=i+1;j<n;j++)
   {
       if(array[i]<array[j])
       {
           aux=array[i];
           array[i]=array[j];
           array[j]=aux;
       }
   }
  }
 
  for (i=n-1;i>=0;i--)
  {
      printf("%f\n",array[i]);
  }
     
  return 0;
}
