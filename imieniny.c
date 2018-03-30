#include <stdio.h>
int main(void){
	int L, C, D, i, wynik[500];
	scanf("%d", &D);
	if(D<=500 && D>=1){
		for(i=0; i<D; i++){
			scanf("%d %d", &L, &C);
			if(L>=1 && C>=1){
				if(((L-1>0) && C%(L-1)>= 1))
					wynik[i]=1;
				if((L-1)==0)
					wynik[i]=1;
				if((L-1)>0 && C%(L-1)<1)
					wynik[i]=0;
			}
		}
		for(i=0; i<D; i++){
			if(wynik[i]==1)
				printf("TAK\n");
			else
				printf("NIE\n");
		}
	}
	return 0;
}
