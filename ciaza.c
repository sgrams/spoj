#include <stdio.h>
#include <math.h>

int main(void){
	int i, D;
	float X[500], Y[500], Z[500];
	float wynik;

	scanf("%d", &D);
	for(i=0; i<D; i++){
			scanf("%f %f %f", &X[i], &Y[i], &Z[i]);
	}
	for(i=0; i<D; i++){
		if(X[i]<=1000 && Y[i]<=1000 && Z[i]>1 && X[i]>=1 && Y[i]>=1){
			wynik=(((Z[i] * Y[i]) - (X[i] + Y[i])) / (1-Z[i])) * 12;
			printf("%.0f\n", fabs(wynik));
		}
	}
	return 0;
}
