#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef enum{
	bay, //0
	bayan //1
} cinsiyet;

typedef struct {
	int yas;
	char * isim;
	cinsiyet c;
}insan;
int emeklimi (insan *birey){
	if(birey->c==bay && birey->yas>55)
	    return 1;
	if(birey->c==bayan && birey->yas>50)
	    return 1;
	else
	return 0;
}
int main() {
	int a;
	insan ali;
	insan *veli;
	veli=(insan*) malloc(sizeof(insan));
	veli ->yas=40;
	veli->c=bay;
	ali.yas=70;
	ali.c= bay;
	printf("alinin yasi: %d alinin cisiyeti: %u",ali.yas,ali.c);
	printf("\n velinin yasi: %d",veli->yas);
	printf("ali emeklimi: %d",emeklimi(&ali)); // & i�aretini koymam�z�n sebebi aliyi pointer olarak tan�mlamad�k 24. sat�rda ama
	// fonks�yonda bireyi pointer olarak tan�mlad�k ondan dolay�.
	
	
	return 0;
}
