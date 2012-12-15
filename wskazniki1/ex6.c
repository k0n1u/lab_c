#include <stdio.h>
#include <string.h>

char *fca(char *wejscie)
{
  int i;

  for(i=0;i<=strlen(wejscie);i++)
    {
      if(wejscie[i]!='\n' || wejscie[i]!='\t' || wejscie[i]!=' ')
	{
	  break;
	}
    }
  printf("znak: %d; adres: %p\n",wejscie[i],&wejscie[i]);
  return &wejscie[i];


}



int main()
{
  char lancuch[80]="cos tam";
  char *pointer=lancuch, *pointer2;

  // *pointer=&firstCharAddress(&lancuch);
  pointer2=&fca(*pointer);
  printf("adres: %p\n",pointer2);






}
