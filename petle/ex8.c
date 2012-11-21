//zadanie 8
#include <stdio.h>

void halfTree()
{
  int i,j;
  
  for(i=1;i<=4;i++)
    {
      for(j=1;j<=i;j++)
	{
	  putchar('*');
	}
       printf("\n");
    }

}

void halfTree2()
{
  int i,j;

  for(i=0;i<4;i++)
    {
      for(j=4;j>i;j--)
	{
	  putchar('*');
	}
      printf("\n");
    }

}

void halfTree3()
{
  int i,j,k;
  for(i=2;i<=5;i++)
    {
       for(j=1;j<=5-i;j++)
	{
	  printf(" ");
	}
      for(k=1;k<=5-j;k++)
	{
	  putchar('*');
	}

      putchar('\n');
    }
}

void halfTree4()
{
  int i,j,k;
  for(i=1;i<=4;i++)
    {
      for(k=1;k<=6-j;k++)
	{
	  putchar(' ');
	}
      for(j=1;j<=5-i;j++)
	{
	  putchar('*');
	}

      putchar('\n');
    }
}

	    

int main()
{
  halfTree();
  printf("\n");
  halfTree2();
  printf("\n");
  halfTree4();
  printf("\n");
  halfTree3();
  return 0;
}
