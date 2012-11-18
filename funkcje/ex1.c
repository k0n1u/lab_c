//zad1
#include <stdio.h>
#include <math.h>

double przeciwPr(double a, double b)
{
  return sqrt((a*a)+(b*b));
}


int main()
{
  double a,b,c;
  printf("Podaj długości przyprostokątnych\n");
  scanf("%lf",&a);
  scanf("%lf",&b);
  
  c=przeciwPr(a,b);

  printf("długość przeciwprostokątnej: %4.lf\n",c);



  return 0;
}
