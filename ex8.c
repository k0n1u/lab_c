#include <stdio.h>

int suma(int,int,int);
int iloczyn(int,int,int);
int min(int,int,int);
int max(int,int,int);


int main()
{
  int a,b,c;

  printf("Wprowadź trzy liczby całkowite: ");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  
  printf("Suma wynosi: %d\n",suma(a,b,c));
  printf("Iloczyn wynoski: %d\n",iloczyn(a,b,c));
  printf("Najmniejsza liczba to: %d\n",min(a,b,c));
  printf("Największa liczba to: %d\n",max(a,b,c));
  
  return 0;
}

int suma(int a,int b,int c)
{
  return a+b+c;
}

int iloczyn(int a,int b, int c)
{
  return a*b*c;
}

int min(int a, int b, int c)
{
  int min=a;
  
  if(b<min)
    {
      min=b;
    }
  if(c<min)
    {
      min=c;
    }

  return min;
}

int max(int a, int b, int c)
{
  int max=a;

  if(b>max)
    {
      max=b;
    }
  if(c>max)
    {
      max=c;
    }

  return max;
}
