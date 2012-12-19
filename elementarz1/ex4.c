#include <stdio.h>

int silnia(int n)
{
	int wynik=1;

	if(wynik!=0)
	{
		for(int i=1;i<=n;i++)
		{
			wynik*=i;
		}
	}

return wynik;
}

int main()
{
	printf("%d\n",silnia(5));
}