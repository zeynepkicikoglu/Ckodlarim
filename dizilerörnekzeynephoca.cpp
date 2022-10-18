#include <stdio.h>

void diziyeVeriGirisi(int dizi[], int boyut){
    int i;
    for(i=0;i<boyut;i++){
        printf("%d. elemani giriniz:",i+1);
        scanf("%d",&dizi[i]);
    }
    
    
}

void diziyiYazdir(int dizi[], int boyut){
    int i;
    printf("\nDizi elemanlari:\n");
    for(i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
    
}

int main()
{
    int dizi[10];
    
    diziyeVeriGirisi(dizi,10);
    diziyiYazdir(dizi,10);
    
    
    
    

    return 0;
}
