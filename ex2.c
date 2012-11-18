/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>
int main()
{
  int licz1,licz2 ;

  printf("Podaj pierwsza liczbe: \n");
  scanf("%i", &licz1);
  printf("Podaj druga liczbe: \n");
  scanf("%i", &licz2);

  if(licz1!=licz2)
    {

      if (licz1>licz2)
	{
	  printf("Wieksza jest pierwsza liczba.\n");
	}
      else
	{
	  printf("Wieksza jest druga liczba.\n");
	}
    }
  else
    {
      printf("Liczby sa rowne!\n");
    }
    return 0;
}
