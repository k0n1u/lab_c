#include <stdio.h>

void printTab(int *tab)
{
  for (int i=0;i<10;i++)
    {
      printf("%d ",tab[i]);
    }
  putchar('\n');
}


int main()
{

  int tab[10]={1,2,3,4,5,6,7,8,9,10};
  int *pointer;

  pointer=tab;
  printf("Przed zamianą\n");
  printTab(pointer);

  for (int i=0;i<10;i++)
    {
      *(pointer+i)=0;
    }
  printf("Po zamianie\n");
  printTab(pointer);
}
