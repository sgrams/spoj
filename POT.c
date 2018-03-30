#include <stdio.h>
double poteguj(int a, int b);
int main(void){
	unsigned int D, a[10], b[10], aprim, bprim, jedynki_int, i;
	double jedynki;

	scanf("%u", &D);
	if(D<=10 && D>=1){
		for(i=0; i<D; i++){
			scanf("%u %u", &a[i], &b[i]);
		}
		for(i=0; i<D; i++){
			if(b[i]!=0){
				aprim = a[i]%10+10;
				bprim = b[i]%4+4;
				jedynki = poteguj(aprim, bprim);
				jedynki_int = jedynki;
				jedynki_int = jedynki_int %10;
				printf("%d\n", jedynki_int);
			}
			else{
				printf("1\n");
			}
		}
	}
	return 0;
}
double poteguj(a, b){
	int i;
	double poteguj = a;
	
	if(b==0){
		poteguj = 1;
	}
	else{
		for(i=1; i<b; i++){
			poteguj = poteguj*a;
		}
	}
	return poteguj;
}
