#include <stdio.h>
#include <string.h>
/*
int main()
{
	char isim[] ="Zeynep";
	printf("%d" , strlen(isim));
	
	return 0;
}

*/

/*
int uzunlukdon(char name[]){
	int uzunluk=0,i;
	
     for(i=0; name[i] != '\0'; i++){
     	uzunluk++;
	 }	
	 
	 return uzunluk;
}


int main() {
	
	char isim[]= "zeynep";
	
	printf("%d" , uzunlukdon(isim));
	
} */

void terscevir(char dizi[])
{
	
	int uzunluk,i,gecici;
	uzunluk=strlen(dizi);
	
	for(i=0;i<uzunluk/2;i++) {
		
		gecici=dizi[i];
		dizi[i]=dizi[uzunluk-1 -i];
		dizi[uzunluk-1 -i]=gecici;
		
	}
	
	
}

int main() {
	
	char text[200];
	
	scanf("%s",text);
	
	terscevir(text);
	printf("%s",text);
	
	
	return 0;
	
	
}







