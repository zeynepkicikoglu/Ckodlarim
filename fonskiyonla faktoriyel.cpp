#include <stdio.h>

int faktoriyel (int sayi){
	
	int fact=1; // 1 e eþitlemezsek 0 olarak algýlýyo ve sonuca hep sýfýr yazýyor. 
	
	for(; sayi>0; sayi--){
		
		fact*=sayi;
	}
	
	
	return fact;
}


int main() {
	
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" ,&sayi);
	
	printf("girdiginiz sayinin faktoriyel degeri: %d dir" , faktoriyel(sayi));
	
	
	
	return 0;
}
