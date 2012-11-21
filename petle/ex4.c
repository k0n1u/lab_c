//zadanie4
#include <stdio.h>

int main()
{
  int n,i,wynik=0;
  
  printf("podaj liczbę\n");
  scanf("%d",&n);
  if(n>0)
    {
      for(i=1;i<=n;i++)
	{
	  wynik+=i;
	}
      printf("Wynik sumowania od 1 do %d: %d\n",n,wynik);
    }
  else
    {
      printf("podałeś liczbę mniejszą od 0\n");
    }
  

  return 0;
}
