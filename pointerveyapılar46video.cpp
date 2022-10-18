#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};
int main(){
	
	struct ogrenci *tut;
	struct ogrenci ogrenci1;
	strcpy(ogrenci1.isim,"zeynep");
	strcpy(ogrenci1.soyisim,"kicikoglu");
	ogrenci1.numara=306;
	
	tut=&ogrenci1;
	
	printf("%s %s %d\n",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara);
	printf("%s %s %d\n",tut->isim,tut->soyisim,tut->numara);
	
	  // NOT:  *tut.isim== tut->isim
	
	
	
	return 0;
}
