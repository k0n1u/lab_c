#include <stdio.h>
#include <math.h>

int main()
{
  double i,j,k;

  printf("podaj wartość początkową:\n");
  scanf("%lf",&i);
  printf("podaj wartość końcową:\n");
  scanf("%lf",&j);
  printf("podaj krok\n");
  scanf("%lf",&k);


  for(i=i;i<=j;i+=k)
    {
      printf("%.4lf\t%.4lf\n",i,sqrt(i));\
    }

  return 0;
}
