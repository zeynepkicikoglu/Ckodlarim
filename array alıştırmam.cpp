#include <stdio.h>

int carp(int sayilar[] , int size) {
	
	int carpim=1,i;
	
	for(i=0 ; i<size ; i++) {
		
		carpim*=sayilar[i];
		
	}
	
	return carpim;
}



int main() {
	
	
	int sayi[5]={5,6,7,8};
	
	printf("%d" , carp(sayi,4));
	
	
	return 0;
	
}
