/*
#include <stdio.h>
int main(){
	
	FILE *filep=fopen("dosya_adi.txt","w");
	
	// "w" modu dosya_adi isimli dosya yoksa yaratýr varsa olaný siler yeniden yaratýr.
	// "r" modu dosyayi okumayý saðlar.
	// "a" var olan dosyayý dosya içindeki deðerleri kaybetmeden deðiþtirmemizi saðlýyor.
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
