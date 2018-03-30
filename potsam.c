#include <stdio.h>

int main (void)
{
	unsigned int n1, n2, k1, k2;

	scanf("%u %u %u %u", &n1, &k1, &n2, &k2);
	if(n1 >= 1 && n2>=1 && k1>=1 && k2>=1 && n1<=1000 && n2<=1000 && k1<=1000 && k2<=1000)
		printf("%u\n", (n1*k1)+(n2*k2));
	return 0;
}
