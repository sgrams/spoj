#include <stdio.h>

int main (void)
{
	int x;
	int y = (x=1) + (x=2);
	printf("%d\n", y);
	return 0;
}
