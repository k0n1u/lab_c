//zadanie 7
#include <stdio.h>

int main()
{
  double tab[6];
  int i,counter=0;


  for(i=0;i<6;i++)
    {
      printf("Podaj %d. liczbę\n",i+1);
      scanf("%lf",&tab[i]);
    }

  for(i=0;i<6;i++)
    {
      if(tab[i]>0)
	{
	  counter++;
	}
    }

  printf("w tablicy znajduje się %d liczb dodatnich\n",counter);

  return 0;
}
