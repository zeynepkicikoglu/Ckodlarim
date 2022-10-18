#include <stdio.h>

void diziyeVeriGirisi(int dizi[],int boyut){
    int i;
    for(i=0;i<boyut;i++){
        printf("%d. elemani giriniz:",i+1);
        scanf("%d",&dizi[i]);
    }
}

void diziyiYazdir(int dizi[],int boyut){
    int i;
    for(i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
}

void degistir(int dizi[],int boyut){
    int i;
    
    for(i=0;i<boyut;i++){
        if(dizi[i]%2==0)
            dizi[i]=0;
        else
            dizi[i]=1;
    }
}


int main()
{
    int dizi[5];

    diziyeVeriGirisi(dizi,5);
    
    printf("Degisimden once:\n");
    diziyiYazdir(dizi,5);
    
    degistir(dizi,5);
    
    printf("\nDegisimden sonra:\n");
    diziyiYazdir(dizi,5);
    

    return 0;
}

