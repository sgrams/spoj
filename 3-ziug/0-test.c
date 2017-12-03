#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  int i, n, a, b, *tab;
  scanf("%i", &n);
  tab = (int*)malloc(n*sizeof(int));

  for (i=0; i<n; i++)
  {
    scanf("%i %i", &a, &b);
    printf("%i\n", a+b);
  }

  free(tab);
  return 0;
}
