/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};
struct ogrenci *degerAl(struct ogrenci *p){
	
	strcpy(p->isim,"Duru");
    strcpy(p->soyisim,"Yildiz");
	p->numara=111;
	
	return p;
}
void goster(struct ogrenci *p){
	
	printf("Ogrencinin Bilgileri:\nIsim:%s\nSoyisim:%s\nNumara:%d",p->isim,p->soyisim,p->numara);
	
	
}
int main(){
 struct ogrenci *tut;
 
 struct ogrenci ogrenci1={"zeynep","kicikoglu",306};
 
 tut=degerAl(&ogrenci1);
 printf("%s %s %d",tut->isim,tut->soyisim,tut->numara);
  
	
	return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};
void degerAl(struct ogrenci *p){
	
	strcpy(p->isim,"Duru");
    strcpy(p->soyisim,"Yildiz");
	p->numara=111;
	
}
void goster(struct ogrenci *p){
	
	printf("Ogrencinin Bilgileri:\nIsim:%s\nSoyisim:%s\nNumara:%d",p->isim,p->soyisim,p->numara);
	
	
}
int main(){
 
 
 struct ogrenci ogrenci1={"zeynep","kicikoglu",306};
 
 degerAl(&ogrenci1);
 printf("%s %s %d",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara);
  
	
	return 0;
}
