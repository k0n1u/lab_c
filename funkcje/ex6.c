#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checker(int a, int b, int wynik) /*funkcja sprawdza czy wynik jest dobry. zwraca 1 gdy dobry, 0 gdy zły*/
{
  if(wynik==a*b)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

int rnd(int min, int max)
{
  int tmp;
  if (max>=min)
    max-= min;
  else
    {
      tmp= min - max;
      min= max;
      max= tmp;
    }
  return max ? (rand() % max + min) : min;
}

void mainMenu()
{
  int exitCounter=0,wynik,a,b,badAnswerCount=0,goodAnswerCount=0;
  printf("Program spradzi Twoją umiejętność mnożenia.\n");
  
  while(exitCounter!=5)
    {
      printf("\n");
      a=rnd(1,100);
      b=rnd(1,100);
      printf("Ile to jest %d * %d ?\n",a,b);
      scanf("%d",&wynik);

      if(checker(a,b,wynik)==1)
	{
	  printf("Dobrze!\n");
	  goodAnswerCount++;
	}
      else
	{
	  printf("Źle!\n");
	  badAnswerCount++;
	}
	 
      exitCounter++;
    }
      
     
  printf("\n");
  printf("Podsumowanie: %d dobrych odpowiedzi, %d złych odpowiedzi\n",goodAnswerCount,badAnswerCount);
}

int main()
{
  mainMenu();
}
