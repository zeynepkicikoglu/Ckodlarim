#include <stdio.h>

int main()
{
   int x=7;
   int *xptr = &x;
   printf("x degiskeninin icerigi %d dir\n",x);
  // printf("x degiskeninin icerigi %d dir", *x); //Ýcerigin icerigine ulasmaya calistik
   printf("x degiskenin adresi %p dir\n", &x);
   printf("xptr isaretcisinin icerdigi veri (x in adresine esittir) %p dir\n", xptr);
   printf("xptr isaretcisinin adresi %p dir\n", &xptr);
   printf("xptr isaretcisinin icerigi (x degiskenin icerigine esittir) %d dir\n", *xptr);
    return 0;
}
