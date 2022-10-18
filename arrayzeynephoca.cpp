/*Kullanýcýnýn 5 elemanlý bir diziye tamsayýlar girdiði ve bu dizinin her elemanýnýn
tek sayý mý çift sayý mý olduðunu ekranda gösteren bir program yazýnýz. Bu program iki 
fonksiyondan oluþmalýdýr. bul() fonksiyonu çaðrýldýðý yerden bir tamsayý deðeri almalý
ve bunun tek veya çift olduðunu ekranda göstermelidir. main() fonksiyonu ise 
kullanýcýdan 5 tamsayý deðerini alýp bunlarý bir dizide saklamalý ve bul() fonksiyonunu
kullanarak dizi elemanýnýn tek veya çift olduklarýný ekranda göstermelidir.*/

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
