#include <stdio.h>
#define L_DNI 7

int main() {

  int l_tyg,l_dni,l_dniTMP;

  printf("Podaj liczbę dni.\n");
  scanf("%d",&l_dni);
  
  l_dniTMP=l_dni;

  l_tyg=l_dni/L_DNI;
  l_dni-=l_tyg*L_DNI;

  printf("%d dni to %d tygodnie i %d dni.\n",l_dniTMP,l_tyg,l_dni);
}
