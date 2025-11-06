#include <stdio.h>
#include <stdlib.h>

//int main(int argc, char *argv[])

void main(void)
{
  //½Ç½À 3  
 
  char src[]="The worst things to eat before you sleep";
  char dst[100];
  
  strcpy(dst,src);
  
  printf("copied string: %s\n",dst);
   
  system("PAUSE");	
  return 0;
}
