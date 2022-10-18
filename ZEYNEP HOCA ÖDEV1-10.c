#include <stdio.h>
#include <stdlib.h>
int main() {
	

	int rastgelesayi=rand()%1000+1;
	int tahmin,cevap;
	
	
	printf("lutfen tahmininizi giriniz \n");
	scanf("%d",&tahmin);
	
	while(rastgelesayi != tahmin) {
		
		if(tahmin>rastgelesayi) {
			printf("cok buyuk. tekrar deneyin.");
			scanf("%d", &tahmin);
		}
		else if (tahmin<rastgelesayi) {
			printf("cok kucuk. tekrar deneyin.");
			scanf("%d", &tahmin);
		}
		  }
		 
		 
		
		printf("mukemmel bildiniz.");
		char secim;
		
		printf("\nTekrar oynamak ister misiniz? E/H \n" ,secim);
		scanf("%s" , &secim);
	      
	     
	     while(secim=='E'){
	       printf("lutfen tahmininizi giriniz \n");
	       scanf("%d",&tahmin);
	       
		   if(tahmin>rastgelesayi) {
			printf("cok buyuk. tekrar deneyin.");
			scanf("%d", &tahmin);
		}
		else if (tahmin<rastgelesayi) {
			printf("cok kucuk. tekrar deneyin.");
			scanf("%d", &tahmin);
		}
		else {
	
		printf("mukemmel bildiniz.\n");
        printf("\nTekrar oynamak ister misiniz? E/H \n" ,secim);
		scanf("%s" , &secim);
	}
	
		 }
	     
	     
		  
		    printf("bye bye..");
		 
	return 0;
}
