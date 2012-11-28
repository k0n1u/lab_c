#include <stdio.h>

int main()
{
  int nb,nt,nl;

  nt = 0;
  nl = 0;
  nb = 0;

  int c;

  while ((c=getchar()) != EOF);
  {
      if (c == ' ')
	++nb;
      else if (c == '\t')
	++nt;
      else if (c == '\n')
	++nl;
  }
    
  printf("%d %d %d\n", nb, nt, nl);
}
