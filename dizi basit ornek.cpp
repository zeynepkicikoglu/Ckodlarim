#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	
	char isim[20];
	char *soyisim;
	soyisim=((char*)malloc(sizeof(char)*20));
	printf("isminizi ve soyisminizi girin:\n");
	scanf("%s %s",isim,soyisim);
	printf("tanisdigimiza memnun oldum %s %s",isim,soyisim);
	printf("\n3. karakterler: %c %c",isim[2],soyisim[2]);
	
	
	return 0;
}
