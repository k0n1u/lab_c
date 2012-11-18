//zadanie2 - silnia
#include <stdio.h>

int silnia(int n)
{
  int i,wynik=1;

  if(n==0)
    {
      return 1;
    }
  else
    {
      for(i=1;i<n+1;i++)
	{
	  wynik*=i;
	}
      return wynik;
    }




}



int main()
{
  int n,wynik;
  printf("podaj liczbę\n");
  scanf("%d",&n);
  wynik=silnia(n);
  printf("%d!= %d\n",n,wynik);




  return 0;
}
