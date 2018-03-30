#include <stdio.h>
int silnia(unsigned int n){
	int i, silnia=1;
	for (i=1; i<=n; i++){
		silnia = silnia * i;
	}
	return silnia;
}
int main(void){
	unsigned int i, D, n[30], dziesiatki, jednosci;
	scanf("%u", &D);
	if(D>=1 && D<=30){
		for(i=0; i<D; i++){
			scanf("%u", &n[i]);
		}
		for(i=0; i<D; i++){
			if(n[i]>10){
				dziesiatki=0;
				jednosci=0;
			}
			else{
				dziesiatki = (silnia(n[i]) % 100)/10;
				jednosci = silnia(n[i]) % 10;
			}
		printf("%d %d\n", dziesiatki, jednosci);
		}
	}
	return 0;
}
