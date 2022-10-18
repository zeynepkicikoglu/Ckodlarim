#include <stdio.h>

int main()
{
    float fh, cl;
    int secim;
    
    printf("1: Fahrenheit'tan Celsius'a donusum.");
    printf("\n2: Celsius'tan Fahrenheit'a donusum.");
    printf("\nSeciminizi giriniz (1 veya 2):");
    scanf("%d",&secim);
    
    if(secim==1){
        printf("Fahrenheit degerini giriniz:");
        scanf("%f",&fh);
        cl=(fh-32)/1.8;
        printf("Girdiginiz degerin Celsius karsiligi %.2f",cl);
    }
    
    else if(secim == 2){
        printf("Celsius degerini giriniz:");
        scanf("%f",&cl);
        fh=(cl*1.8)+32;
        printf("Girdiginiz degerin Fahrenheit karsiligi %.2f",fh);
        
    }
    
    else
    {
        printf("\n Gecersiz secim");
    }

    return 0;
}
