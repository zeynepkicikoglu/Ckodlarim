/*Bu programda 30 ki�ilik s�n�f bilgilerini bir fonksiyon kullanarak okuyal�m ve en
y�ksek ortalamal� ��renciyi bulup isim ve not ortalamas�n� yazd�ral�m*/
#include <stdio.h>
#include <string.h>
struct ogrenci{
    char isim[15];
    float ortalama;
};
void oku(struct ogrenci s[]){
    int i;
    for(i=0; i<30; i++){
    	printf("Ogrencinin ismi:");
        scanf("%s", s[i].isim);
        printf("Ogrencinin notu:");
        scanf("%f",&s[i].ortalama);
    }
}
int main()
{
    struct ogrenci sinif[30];
    float enbuyuk=0.0;
    char birinci[15];
    int i;
    
    oku(sinif);
    for(i=0; i<30; i++)
    {
        if((sinif[i].ortalama)>enbuyuk)
        {
            enbuyuk=sinif[i].ortalama;
            strcpy(birinci, sinif[i].isim);
           
        }
    }
    printf("Sinif birincisi: %s", birinci);
    printf("\nNotu: %f", enbuyuk);
    

    return 0;
}
