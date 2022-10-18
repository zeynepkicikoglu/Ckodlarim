#include <stdio.h>

int main()
{
    int matris[10][10];
    int i,j,satir,sutun;
    int toplam=0;
    
    
    printf("Satir sayisini giriniz:");
    scanf("%d",&satir);
    printf("Sutun sayisini giriniz:");
    scanf("%d",&sutun);
    
    
    printf("Matris elemanlarini giriniz:\n");
    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            printf("%d. satir %d. sutun elamanini giriniz: ",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }
    
    
    
    for(i=0;i<satir;i++){
        for(j=0;j<sutun;j++){
            
            printf("%4d",matris[i][j]);
            toplam +=matris[i][j];
            
            
        }

    }
    
    
    

    return 0;
}
