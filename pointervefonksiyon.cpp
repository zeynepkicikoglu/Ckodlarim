#include <stdio.h>
#include <string.h>

char *dondur(char *p , int indeks) {
	
	int uzunluk=strlen(p);
	
	if(indeks>uzunluk) {
		
		return NULL;
		
	}
	
	else{
		
		return p+indeks;
	}
		
}

int main() {
	
	char dizi[]="yazilim";
	
	char *p= dondur(dizi,10);
	
	if(p == NULL) {
		
		printf("Pointer NULL");
	}
	
	else {
		
		printf("%s" ,p);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
