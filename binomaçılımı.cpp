#include <stdio.h>
int main(){
	
	int i,j,p;
	for(i=0;i<=10;i++){
		for(j=0;j<i;j++){
			int nf=1;
			for(p=1;p<=i;p++){
				nf=nf*p;
			}
			int kf=1;
			for(p=1;p<=j;p++){
				kf=kf*p;
			}
			int nkf=1;
			for(p=1;p<=i-j;p++){
				nkf=nkf*p;
			}
			printf("%d",nf/(kf*nkf));
		}
		printf("\n");
	}
	
	
	
	return 0;
}
