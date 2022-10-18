#include <stdio.h>
void fon(int *a){ //parametre olarak adres alacak  
  printf("fonksiyona ilk gelen deger %d dir\n", *a);
  *a=8;
  printf("fonksiyoda yapilan degisim sonrasi deger %d dir\n", *a);
}
int main()
{
 int s=1;
 printf("fon adli fonksiyon cagrilmadan once s degiskeni %d dir\n", s);
 fon(&s); //s degiskeninin adresi fon adli fonksiyona gonderildi
 printf("fon adli fonksiyon cagrildiktan sonra s degiskeni %d dir\n", s);
}
