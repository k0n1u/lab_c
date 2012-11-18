/* Program ten wykonuje konwersję ze stopni na radiany
   według wzoru: rad = PI * deg / 180    */
#include <stdio.h>
#include <math.h>
int main() {
  double deg, rad;
  printf("Podaj kat w stopniach : ");
  scanf("%lf", &deg);
  rad = M_PI*(deg/180) ;  /* grep PI /usr/include/math.h */
  printf("%.2lf deg = %.2lf rad\n",deg,rad);
  return 0;
}
