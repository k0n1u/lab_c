#include <stdio.h>

void prostokat(int szer, int wys)
{
  int i,j;

  for(i=1;i<=wys;i++)
    {
      for(j=1;j<=szer;j++)
	{
	  if(i==1 || i==wys)
	    {
	      putchar('*');
	    }
	  else
	    {
	      if(j==1 || j==szer)
		{
		  putchar('*');
		}
	      else
		{
		  putchar(' ');
		}
	    }
	
	}
      putchar('\n');
    }
}



int main()
{

  prostokat(20,10);



  return 0;
}
