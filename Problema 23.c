#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
  char letra;
  char *p_l = &letra;
  
  for(letra='a'; letra<='z'; letra++)
  	printf("%c ",*p_l);
  
  return 0;
}
