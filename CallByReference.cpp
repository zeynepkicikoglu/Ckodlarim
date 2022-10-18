#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};
void goster(struct ogrenci *p){
	
	printf("Ogrencinin Bilgileri:\nIsim:%s\nSoyisim:%s\nNumara:%d",p->isim,p->soyisim,p->numara);
	
	
}
int main(){
	
  struct ogrenci ogrenci1={"zeynep","kicikoglu",306};
  goster(&ogrenci1);
  
	
	return 0;
}
