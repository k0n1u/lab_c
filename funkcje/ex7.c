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

int rnd(int min, int max) /* funkcja losuje liczbę z podanego zakresu*/
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

void komentator(int wynik)
{
  int rndVar;
  rndVar=rnd(1,3);
  
  switch (rndVar) {
  case 1: 
    if(wynik==1) {
      printf("Bardzo dobrze!\n");
    }
    else {
      printf("Zła odpowiedź.\n");
    }
    break;

  case 2:
    if (wynik == 1) {
      printf("Świetnie!\n");
    }
    else {
      printf("Oj, niedobrze.\n");
    }
    break;
  case 3:
    if (wynik == 1){
      printf("Dobra robota!\n");
    }
    else {
      printf("Następnym razem pójdzie Ci lepiej.\n");
    }
    break;
  }
}

  

void mainMenu()
{
  int exitCounter=0,wynik,a,b,badAnswerCount=0,goodAnswerCount=0,answerValue;
  printf("Program spradzi Twoją umiejętność mnożenia.\n");
  
  while(exitCounter!=5)
    {
      printf("\n");
      a=rnd(1,10);
      b=rnd(1,10);
      printf("Ile to jest %d * %d ?\n",a,b);
      scanf("%d",&wynik);
      answerValue=checker(a,b,wynik);

      if(answerValue == 1)
	{
	  komentator(answerValue);
	  goodAnswerCount++;
	}
      else
	{
	  komentator(answerValue);
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
