#include <stdio.h>
int main() {
  float M;
  int suma = 0;
  int i = 1;
  int n;
  
  printf("Podaj liczbe M: \n");
  scanf("%f", &M);

  while (suma < M) {
     suma=suma+i;
     i++;
  }
  n=i-1;
  printf("Szukane n to: %d\n", n);
  return 0;
}
