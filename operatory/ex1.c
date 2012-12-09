#include <stdio.h>

#define L_MIN 60

int main()
{
  int min,h;

  printf("podaj liczbę minut\n");
  scanf("%d",&min);
  h=min/L_MIN;
  min-=h*L_MIN;
  printf("godzin: %d, minut: %d\n",h,min);
}
