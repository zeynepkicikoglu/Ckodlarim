#include<stdio.h>
#include<string.h>

int main(){
	
	/* fopen("dosya_adi","mod");  dosya acmak olusturmak ýcýn
	   fclose(filep);  dosya kapamak için
	   fputc(character,filep);   dosyanýn içine bazý karakterleri yazmak için
	*/
	
	char veri[25]="yazilim bilimi";
	int uzunluk=strlen(veri);
	int i;
	
	FILE *filep=fopen("dosya_adi.txt","w");
	
	if(filep==NULL){
		printf("dosya olusturulamadi.");
		
	}
	else{
		for(i=0;i<uzunluk;i++){
			
			fputc(veri[i],filep);
			printf("yazilan karakter: %c \n",veri[i]);
			
		}
		printf("dosya basariyla yazdirildi.");
		fclose(filep);
	}
	
	return 0;
}
