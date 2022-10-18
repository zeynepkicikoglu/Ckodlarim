#include <stdio.h>
struct ogrenci{
  char isim[15];
  char soyisim[15];
  int yas,numara;
  
};

int main(){
    
    
    struct ogrenci zeynep={"zeynep","kicikoglu",306,19};
    
    printf("%s %s %d %d ",zeynep.isim,zeynep.soyisim,zeynep.numara,zeynep.yas);
    
    return 0;
}
