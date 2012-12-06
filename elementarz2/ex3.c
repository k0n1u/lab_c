#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  double pi=4;
  double wynik[4];
  double j=3,k=1;

  for(int i=1;i<=1000000;i++)
    {
      pi+=(pow(-1,i) * (4/j));
      j+=2;

      switch (i) {
      case 10: 
	wynik[0]=pi;
	break;
      case 100:
	wynik[1]=pi;
	break;
      case 1000:
	wynik[2]=pi;
	break;
      case 1000000:
	wynik[3]=pi;
	break;
      }

      //system("clear");
      printf("Trwają oblicznia: %.2lf",((k/1000000)*100));
      putchar('%');
      putchar('\r');
      k++;
    }
  putchar('\n');
  printf("sumowano razy|   10   |  100   |  1000  | 1000000|\n");
  printf("wynik        |%.6lf|%.6lf|%.6lf|%.6lf|\n",wynik[0],wynik[1],wynik[2],wynik[3]);
}
