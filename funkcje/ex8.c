//zad8

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int losuj()
{
  int zarodek;
  zarodek = time(NULL);
  srand(zarodek);
  return rand()%1001;
}

void zgaduj(int liczba)
{
  int exitCode=0,n;
  

  while(exitCode!=1)
    {
      printf("Zgaduj! Podaj liczbę.\n");
      scanf("%d",&n);

      if(n==liczba)
	{
	  printf("gratuluje! zgadles!\n");
	  exitCode=1;
	}
      else 
	{
	  if (n>liczba)
	    {
	      printf("Za dużo\n");
	    }
	  else
	    {
	      printf("Za mało\n");
	    }
	}
    }
}
      

int main()
{
  int liczba;

  liczba = losuj();
  zgaduj(liczba);






}
