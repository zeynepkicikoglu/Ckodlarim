#include <stdio.h>
char *gunismi(char *gundizisi[], int uzunluk, int hangigun) {
	
	if(hangigun>=1 && hangigun <=uzunluk)
	
	return gundizisi[hangigun-1];
	
	else
	
	return NULL;
	
	
	
}
int main() {
	
	char *gunler[7]={"pazartesi","sali" ,"carsamba","persembe","cuma","cumartesi","pazar"};
	
	char *p=gunismi(gunler,7,5);
	
	if (p==NULL)
	printf("NULL");
	
	else
	printf("%s",p);
	
}
