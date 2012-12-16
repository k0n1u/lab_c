#include <stdio.h>

int newton(int n,int k)
{
	if(k==0 || k==n)
		return 1;
	if(k>0 && k<n)
		return newton(n-1,k-1)+newton(n-1,k);
}



int main()
{
	
	printf("%d\n",newton(15,8));



}