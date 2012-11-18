//zadanie 3

#include <stdio.h>

int main()
{
  int a,b;

  printf("podaj pierwsza liczbe\n");
  scanf("%d",&a);
  printf("podaj druga liczbe\n");
  scanf("%d",&b);

  if(a<b)
    {
      for(a=a;a<=b;a++)
	{
	  printf("%d ",a);
	}
      printf("\n");
    }
  else
    {
      printf("Podałeś zły zakres!\n");
    }
  return 0;
}
