#include<stdio.h>
#include<ctype.h>

#define N 40

int main () {
  char ch;
  do {
    printf(
     "\n Co chcesz zrobi/c? (Usunac, Kopiowac, Przenazwowac, Wyjsc) "
    );
    do {
      ch = getchar();
    } while (isspace(ch));
    switch (toupper(ch)) {
     case 'U':  printf("  USUWAM.\n");  break;
     case 'K':  printf("  KOPIUJE.\n");  break;
     case 'P':  printf("  ZMIENIAM NAZWE.\n");  break;
     case 'W':  printf("  Koniec, dziekuje.\n\n");  break;
     default:   printf("  Zly wybor.\n");  break;
    }
  }  while (toupper(ch) != 'W');
  return 0;
}
