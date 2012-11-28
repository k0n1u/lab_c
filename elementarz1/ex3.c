 
/* Program ten wypisuje liczby z tablicy tabela[]                 
   w odwrotnej kolejności: 12, 6, 4, 2, 1 */
#include <stdio.h>
int main() {

  int i=4;

  int tabela[] = {1, 2, 4, 6, 12};
  

  while(i>=0)
    {
      printf("%d\n",tabela[i]);
      i--;
    }
}




