//zadanie 4.
#include <stdio.h>


int change(int n)
{
  char bufor[20],bufor2[20];
  int dlugosc,i;
  
  snprintf(bufor,20,"%d",n);
  dlugosc=strlen(bufor);

  for(i=0;i<=dlugosc-1;i++)
    {
      bufor2[i]=bufor[dlugosc-1-i];
    }
  
  sscanf(bufor2,"%d",&i);

  return i;
}



int main()
{
  int a;
  printf("podaj liczbę\n");
  scanf("%d",&a);
  printf("Podana liczba: %d. Po zmianie: %d\n",a,change(a));




  return 0;
}
