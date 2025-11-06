#include <stdio.h>
#include <stdlib.h>

//int main(int argc, char *argv[])

void main(void)
{
  //½Ç½À 5

  char input[100];
  FILE*fp;
  int i;
  
  //fopen
  fp=fopen("sample.txt","w");
 
 //fprintf
  for(i=0; i<3; i++){
  printf("input a word: ");
  scanf("%s",input);
  fprintf(fp,"%s\n",input);
  } 
  
  //fclose
  fclose(fp); 
   
  system("PAUSE");	
  return 0;
}
