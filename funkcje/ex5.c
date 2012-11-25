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

void owal(int szer, int wys)
{
  int i,j;

  for(i=1;i<=wys;i++)
    {
      for(j=1;j<=szer;j++)
	{
	  if(j==(szer/2)-i || j==(szer/2)+i || ((i==1 || i==wys) && j==(szer/2)))
	    {
	      putchar('*');
	    }
	  else
	    {
	      putchar(' ');
	    }
	}
      putchar('\n');
    }
	    





}


int main()
{

  //prostokat(20,10);
  owal(20,20);



  return 0;
}
