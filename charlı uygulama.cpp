#include <stdio.h>

int main()
{
    int toplam, N, sayici;
    char secim;
    do{
    printf("Bir sayi giriniz:");
    scanf("%d",&N);
    
    toplam=0;
    
    for(sayici=1;sayici<=N;sayici++){
        toplam = toplam+sayici;
        
    }
    
    printf("\n1'den girmis oldugunuz sayiya kadar dogal sayilarin toplami = %d",toplam);
    
    printf("\nDevam etmek icin e tusuna basiniz");
    fflush(stdin);
    scanf(" %c",&secim);//%c'den �nce bo�luk var
    } while(secim == 'E' || secim =='e');
    
    
    printf("\nHo��akal�n");

    return 0;
}
