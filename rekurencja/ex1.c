#include <stdio.h>

int potega(int a,int b)
{
	if(b==0)
		return 1;
	else
		return a=a*potega(a,--b);
}





int main()
{

	printf("wynik: %d\n",potega(2,9));




}