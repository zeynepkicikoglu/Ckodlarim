#include <stdio.h>

int faktoriyel (int sayi){
	
	int fact=1; // 1 e e�itlemezsek 0 olarak alg�l�yo ve sonuca hep s�f�r yaz�yor. 
	
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
