#include <stdio.h>

int main (void)
{
	float a, b, c, x;

	scanf("%f %f %f", &a, &b, &c);
	if(a==0){
		if(b!=c)
			printf("BR\n");
		else
			printf("NWR\n");
	}

	else{
		x = (c-b)/a;
		printf("%.2f\n", x);
	}

	return 0;
}
