#include<stdio.h>

int main () {
  int ile_elem, n=0;
  printf("\n Ile elementow? "); scanf("%i", &ile_elem);
  double tab[ile_elem];
  for (int i=0; i<ile_elem; i++) {
    printf("  tab[%i] == ", i); scanf("%lf", &tab[i]);
    if (tab[i] <= 0) break; else n++;
  }
  printf("\n W tablicy jest %i elementow dodatnich:\n", n);
  for (int i=0; i<n; i++)
    printf("  tab[%i] == %.2lf\n", i, tab[i]);
  printf("\n");
  return 0;
}
