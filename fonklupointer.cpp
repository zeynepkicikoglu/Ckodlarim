#include <stdio.h>

int max(int *a,int uzunluk) {
	
	int maks=a[0];
	int i;
	for(i=1 ; i<uzunluk; i++) {
		
		if(a[i]> maks)
		
		maks=a[i];
	}
	
	
	return maks;
	
	
}


int main() {
	
	int sayilar[5]={1,100,43,66,99};
	
	int maks=max(sayilar,5);
	
	
	printf("sayilar dizisinin en buyuk elemani %d dir",maks);
	
	
	
}
