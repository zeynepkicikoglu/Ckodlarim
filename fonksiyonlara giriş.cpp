#include <stdio.h>

void hatayibas (int hata,int hata2) {
	
	printf("hata kodu: %d %d",hata,hata2);
}

int main() {
	
	int sayi;
	
	printf("negatif olmayan bir sayi giriniz:");
	scanf("%d" ,&sayi);
	
	if (sayi<0) 
	  hatayibas(404,410);
	  
	else 
	 printf("tebrikler");
	 
	return 0;
}
