#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int note[30][3];
    int i,j,toplam;
    double orta;
    printf("Lutfen ogrencilere ait notlari giriniz\n");
    for(i=0; i<30; i++){
        printf("%d. ogrenci notlari:", i+1);
        for(j=0; j<3; j++) {
		scanf("%d", &note[i][j]);
    }
}
    for(j=0; j<3; j++)
    toplam=0; //Her bir sinavin kendi ortalamasini bulmak icin donguye her girildiginde
             //toplam degeri sifirlaniyor
    
    for(i=0; i<30; i++){
    toplam+=note[i][j];
    orta=toplam/30.0;
    printf("%d.sinav ortalamasi: %5.2f\n", j+1, orta);
	}
    
    return 0;
}
