/*
#include <stdio.h>
int main(){
	
	FILE *filep=fopen("dosya_adi.txt","w");
	
	// "w" modu dosya_adi isimli dosya yoksa yarat�r varsa olan� siler yeniden yarat�r.
	// "r" modu dosyayi okumay� sa�lar.
	// "a" var olan dosyay� dosya i�indeki de�erleri kaybetmeden de�i�tirmemizi sa�l�yor.
	// "w+" hem yazma hem okuma izni verir.
	
	if(filep==NULL){
		printf("dosya olusturulamadi");
		
	}
	else {
		printf("dosya olusturuldu.");
	}
	
	
	return 0;
}

*/

#include <stdio.h>

int main(){
	
	
	FILE *filep=fopen("dosya_adi.txt","r");
	
	if(filep==NULL){
		printf("oyle bi dosya yok");
		
	}
	else {
		printf("dosya var.");
	}
	
	
	
	return 0;
}
