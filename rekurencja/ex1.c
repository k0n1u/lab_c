#include <stdio.h>

int potega(int a,int b)
{
	if(b==0)
		return 1;
	else
		a=a*potega(a,--b);
	return a;
}





int main()
{

	printf("wynik: %d\n",potega(2,9));




}