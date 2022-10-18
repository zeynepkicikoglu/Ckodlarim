#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *p,i,enkucuk;
    
    p = ((int*) malloc(20*sizeof(int))); //Burada 20 tane int in sigabilecegi kadar
    //yer istedik. Yani 20 elemani bir dinamik dizi olusturduk
    
    for(i=0; i<20; i++){
        *(p+i)=rand(); //Elemanlari doldurduk
    printf("%d. eleman %d dir\n", i+1, *(p+i));
    }
    enkucuk=*p;
    
    for(i=1; i<20; i++){
        if(*(p+i)<enkucuk)
        enkucuk=*(p+i);
    }
    printf("En kucuk eleman %d dir\n", enkucuk);
    
    free(p);

    return 0;
}
