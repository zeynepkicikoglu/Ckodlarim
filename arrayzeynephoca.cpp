/*Kullan�c�n�n 5 elemanl� bir diziye tamsay�lar girdi�i ve bu dizinin her eleman�n�n
tek say� m� �ift say� m� oldu�unu ekranda g�steren bir program yaz�n�z. Bu program iki 
fonksiyondan olu�mal�d�r. bul() fonksiyonu �a�r�ld��� yerden bir tamsay� de�eri almal�
ve bunun tek veya �ift oldu�unu ekranda g�stermelidir. main() fonksiyonu ise 
kullan�c�dan 5 tamsay� de�erini al�p bunlar� bir dizide saklamal� ve bul() fonksiyonunu
kullanarak dizi eleman�n�n tek veya �ift olduklar�n� ekranda g�stermelidir.*/

#include <stdio.h>
void bul (int a){
    if(a%2==0)
    printf("Sayi cifttir\n");
    else 
    printf("Sayi tektir\n");
}
int main()
{
    int k[5];
    int i;
    printf("Lutfen bes adet tamsayi giriniz\n");
    for(i=0; i<5; i++){
        scanf("%d", &k[i]);
        bul(k[i]);
    }

    return 0;
}
