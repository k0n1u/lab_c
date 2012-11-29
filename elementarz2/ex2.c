#include <stdio.h>

int main() {
  /* deklaracje zmiennych */
  int jest_pierwsza=1,n;
  printf("Podaj liczbe calkowita: ");
  scanf("%d",&n);
  
  for(int i=2;i<n;i++)
    {
      if(n%i==0)
	{
	  jest_pierwsza=0;
	  break;
	}
    }

  printf("Podana liczba '%d' jest %s\n",
	 n, jest_pierwsza ? "pierwsza" : "złożona");
  return 0;
}
