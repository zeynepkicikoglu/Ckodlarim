#include <stdio.h>


int main()
{
    int dizi[10];
    int toplam=0,i;
    double carpim=1;
    
    for(i=0;i<10;i++){
        printf("%d. elemani giriniz:",i+1);
        scanf("%d",&dizi[i]);
    }
    
    for(i=0;i<10;i++){
        toplam=toplam+dizi[i];
        carpim=carpim*dizi[i];
    }
    
    printf("\nDizi elemanlarinin toplami = %d",toplam);
    printf("\nDizi elemanlarinin carpimi =%lf",carpim);
    
    

    return 0;
}
