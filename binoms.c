#include <stdio.h>
double dwumian(int, int);
int main(void){
	unsigned int i, t, n[10000], k[10000];

	scanf("%u", &t);
	if(t<=10000 && t>0){
		for(i=0; i<t; i++){
			scanf("%u %u", &n[i], &k[i]);
		}
		for(i=0; i<t; i++){
			printf("%.0lf\n", dwumian(n[i], k[i]));
		}
	}
	return 0;
}
double dwumian(int n, int k){
	double i, dwumian=1;
	for(i=1; i<=k; i++){
		dwumian = dwumian*(n-i+1)/i;
	}
	return dwumian;
}
