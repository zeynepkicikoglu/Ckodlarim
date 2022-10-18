//Bir dizi elemanlarinin maksimum de�erini ekranda g�steren bir program yazal�m.
 /*Bunun i�in kullan�c� dizi elemanlar�n� girdikten sonra maksimum() fonksiyonuna
yollamal�d�r. maksimum() fonksiyonu ise ekranda bu dizinin maksimum de�erini 
g�stermelidir*/
#include <stdio.h>
void maksimum(int a[], int n);
int main()
{
    int k[5];
    int i;
    printf("Lutfen bes tamsayi giriniz\n");
    for(i=0; i<5; i++){
        scanf("%d", &k[i]);
    }
     maksimum(k, 5);
     return(0);
    }
void maksimum(int a[], int n){
    int i,m; //m degiskeni en buyuk degerin saklanmasi icin tanimlandi
    m=a[0]; //dizinin ilk elemani m degiskeni icerisinde saklandi. en buyuk de�er 
            //dizinin ilk eleman� kabul edildi.
    for(i=1; i<n; i++){
        if(a[i]>m)//dizi i�erisinde daha buyuk eleman olup olmadigi kontrol ediliyor
        m=a[i]; //daha buyuk eleman bulunursa m'nin icerigi guncelleniyor
    }
    printf("Dizinin maksimum degeri:%d dir\n", m);
}
