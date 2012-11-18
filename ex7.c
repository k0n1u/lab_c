//program do oblicznia pierwiastka i odwrotności liczby

#include <stdio.h>
#include <math.h>

double pierw(double);
double odw(double);


int main()
{
  double liczba,odwr,pier;
  
  printf("Podaj liczbę:\n");
  scanf("%lf",&liczba);

  odwr=odw(liczba);
  pier=pierw(liczba);

  if(pier!=-1)
    {
      printf("Podałeś liczbę: %lf\nJej odwrotność to: %lf\nJej pierwiastek to: %lf\n",liczba,odwr,pier);
    }
  else
    {
      printf("Podałeś liczbę: %lf\nJej odwrotność to: %lf\nJej pierwiastek nie istnieje\n",liczba,odwr);
    }

  return 0;
}

double pierw(double a)
{
  //funkcja oblicza pierwiastek kwadratowy 
  //z liczby rzeczywistej
  //jeśli parametr jest liczbą ujemną
  //to funkcja zwraca wartość -1 jako błąd.
  if(a>=0)
    {
      a=sqrt(a);
    }
  else
    {
      a=-1;
    }
  return a;
}

double odw(double a)
{
  //funkcja zwraca odwrotność liczby rzeczywistej
  if(a!=0)
    {
      a*=-1;
    }
  return a;
}
