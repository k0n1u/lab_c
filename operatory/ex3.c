#include <stdio.h>

int sumuj(int,int);

int main()
{
  int a,b;

  printf("podaj a\n");
  scanf("%d",&a);
  printf("podaj b\n");
  scanf("%d",&b);

  printf("wynik: %d\n",sumuj(a,b));
}

int sumuj(int a, int b)
{
  int wynik=0;
  for(int i=a;i<=b;i++)
    {
      wynik+=i;
    }
  return wynik;
}
