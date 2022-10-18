#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct adres {
  char mahalle[15];
  char sokak[15];
  char cadde[20];
  
};
struct ogrenci{
  char isim[20];
  char soyisim[20];
  int numara,yas;
  struct adres adress;
};
int main(){
    
    
    struct ogrenci ogrenci1;
    strcpy(ogrenci1.isim,"zeynep");
    strcpy(ogrenci1.soyisim,"kicikoglu");
    ogrenci1.numara=123;
    ogrenci1.yas=19;
    strcpy(ogrenci1.adres.mahalle,"zümrütevler");
    strcpy(ogrenci1.adres.cadde,"gulsuyu");
    strcpy(ogrenci1.adres.sokak,"sinem");
    
    
    printf("%s %s %d %d %s %s %s ",zeynep.isim,zeynep.soyisim,zeynep.numara,zeynep.yas,ogrenci1.adres.mahalle,ogrenci1.adres.cadde,ogrenci1.adres.sokak);
    
    return 0;
}
