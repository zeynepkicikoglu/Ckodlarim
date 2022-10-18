#include <stdio.h>

int karebul(int);
int main()
{
	
	int sayi,kare;
	
	printf("sayi giriniz:");
	scanf("%d" , &sayi);
	
	kare = karebul(sayi);
	printf("%d sayisinin karesi = %d dir" ,sayi ,kare);
	
	
	return 0;
}

int karebul(int sayi) {
	
	
	return sayi*sayi;
	
	
	
	
	
}
