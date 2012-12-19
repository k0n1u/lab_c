#include <stdio.h>
#include <string.h>

char *fca(char *wejscie)
{
  int i;

  for(i=0;i<=strlen(wejscie)-1;i++)
    {
      if(wejscie[i]!=' ')
	     {  
          if(wejscie[i]!='\n')
          {
            if(wejscie[i]!='\t')
            {
              break;
            }
          }
	     }
    }

  return &wejscie[i];
}



int main()
{
  char lancuch[80]="\n     sdcos tam";
  char *pointer=lancuch;
  
  printf("adres: %p\n",fca(pointer));
}
