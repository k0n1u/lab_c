//zadanie 6
#include <stdio.h>

int main()
{
  double tab[6],min,max;
  int i;

  for(i=0;i<6;i++)
    {
      printf("Podaj %d. liczbę\n",i+1);
      scanf("%lf",&tab[i]);
    }
  min=tab[0];
  max=tab[0];

  for(i=1;i<6;i++)
    {
      if(max<tab[i])
	{
	  max=tab[i];
	}
      if(min>tab[i])
	{
	  min=tab[i];
	}
    }
      printf("Minimum: %.2lf\nMaksimum: %.2lf\n",min,max);
      return 0;
}
