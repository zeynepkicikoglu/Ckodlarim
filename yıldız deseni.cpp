#include <stdio.h>

int main(){
	
	int i,j;
	for(i=1;i<=50;i++){
		for(j=1;j<=50;j++){
			if((i+j)%2==0)
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
