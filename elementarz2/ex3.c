#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  double pi=4;
  double wynik[4];
  double j=3,k=1;
  // const stala = 4;


  for(int i=1;i<=10000;i++)
    {
      // double temp=i;
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
      case 10000:
	wynik[3]=pi;
	break;
      }

      system("clear");
      printf("Trwają oblicznia: %.2lf",((k/10000)*100));
      putchar('%');
      putchar('\n');
      k++;
    }

  printf("sumowano razy|\t10|\t100|\t1000|\t10000|\n");
  printf("wynik|\t%lf|\t%lf|\t%lf|\t%lf|\n",wynik[0],wynik[1],wynik[2],wynik[3]);
}
