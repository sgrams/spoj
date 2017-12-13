#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void heapsort  (int *A, int numbersTableLength);
void buildHeap (int *A, int heapSize);
void heapifyIt (int *A, int i, int heapSize);
void exchange  (int *A, int a, int b);
double my_round (double a);

int main (void)
{
  int i, n, *tab, *tmp;
  double wyn=0;
  scanf("%i", &n);
  tab = (int *)malloc(n*sizeof(int));
//  tmp = (int *)malloc(n*sizeof(int));
  if (n>100000|| n<1)
    return 0;
  
  for (i=0; i<n; i++)
  {
    scanf("%i", &tab[i]);
  }

  heapsort(tab, n);
  for (i=0; i<n-1; i++)
  {
    tab[i+1]+=tab[i];
  }
  for (i=0; i<n-1; i++)
  {
    wyn+=tab[i];
  }
  wyn/=n;
  wyn=my_round(wyn);
  printf("%.2lf", wyn);

  free(tab);
  //free(tmp);
  return 0;
}

void heapsort (int *A, int numbersTableLength) {
    int i;
    int heapSize = numbersTableLength-1;

    buildHeap(A, heapSize);
    for (i=heapSize; i>=1; i--)
    {
      exchange(A, 0, i);
      heapSize--;
      heapifyIt(A, 0, heapSize);
    }
}

void buildHeap (int *A, int heapSize) {
    for (int i=heapSize/2; i>=0; i--)
      heapifyIt(A, i, heapSize);
}

double my_round (double a)
{
  a*=100;
  a = roundf(a);
  a/=100;
  return a;

}
void heapifyIt (int *A, int i, int heapSize) {
  int largest, le, ri;

  while (i<=heapSize)
  {
    le = (2*i)+1;
    ri = (2*i)+2;

    if (le <= heapSize && *(A+le) > *(A+i))
      largest = le;
    else
      largest = i;

    if (ri <= heapSize && *(A+ri) > *(A+largest))
      largest = ri;

    if (largest != i) {
      exchange(A, i, largest);
      i = largest;
    }
    else
      break;
  }
}

void exchange (int *A, int a, int b) {
  if (*(A+a) != *(A+b)) {
    *(A+a) ^= *(A+b);
    *(A+b) ^= *(A+a);
    *(A+a) ^= *(A+b);
  }
}

