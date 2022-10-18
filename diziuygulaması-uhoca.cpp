#include <stdio.h>

void diziyeVeriGirisi(int dizi[],int boyut){
    int i;
    for(i=0;i<boyut;i++){
        printf("%d. elemani giriniz:",i+1);
        scanf("%d",&dizi[i]);
    }
}
int enBuyukEleman(int dizi[],int boyut){
    int i, enBuyukDeger;
    enBuyukDeger=dizi[0];
    
    
    
    for(i=1;i<boyut;i++){
        if(dizi[i]>enBuyukDeger)
            enBuyukDeger=dizi[i];
    }
    return enBuyukDeger;
    
}
int enKucukEleman(int dizi[],int boyut){
    int i, enKucukDeger;
    enKucukDeger=dizi[0];
    
    for(i=1;i<boyut;i++){
        if(dizi[i]<enKucukDeger)
            enKucukDeger=dizi[i];
    }
    return enKucukDeger;
}

int main()
{
    int dizi[5];
    int maksimum,minimum;
    
    diziyeVeriGirisi(dizi,5);
    maksimum=enBuyukEleman(dizi,5);
    minimum=enKucukEleman(dizi,5);
  
    printf("\nDizideki en buyuk eleman  = %d",maksimum);
    printf("\nDizideki en kucuk eleman =%d",minimum);
    
    

    return 0;
}
