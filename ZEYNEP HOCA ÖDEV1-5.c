#include <stdio.h>

int main(){
	
/* Hocam sorudan anladýðým gibi yaptým. Yami önce alýnan sayýnýn tüm basamaklarýna 
7 ekleyip ortaya çýkan onluk sistemi olduðu gibi kullanýp, ondan sonra yer deðiþtirme iþlemlerini yaptým.  	*/
	
	                                                  
  int deger,binler,yuzler,onlar,birler,sifre;
  int yeniucler,yeniikiler,yenidortler,yenibirler;
  printf("4 basamakli bir sayi giriniz:");
  scanf("%d", &deger);   
  
	binler=(deger/1000.0)+7;    
	yuzler=((deger%1000)/100.0)+7;
	onlar=((deger%100)/10.0)+7;
	birler=(deger%10)+7;
	                              
if (deger>999 && deger<10000) {
								
	
	if (birler<10 && onlar<10) {    
		 if (binler<10 && yuzler<10)
		    printf("soylediginiz sayinin sifrelenmis hali: %d%d%d%d" ,binler,yuzler,onlar,birler);
		 else if (binler<10 && yuzler>=10)
		    printf("soylediginiz sayinin sifrelenmis hali: %d%d%d%d",binler,onlar,birler,yuzler);
		else if (binler>=10 && yuzler<10){
			yeniikiler=binler%10;
			binler=binler/10.0;
		printf("soylediginiz sayinin sifrelenmis hali:%d%d%d%d%d",binler,onlar,birler,yeniikiler,yuzler);	
		}
		else{
		yenibirler=(yuzler%10);                 
		yeniikiler=(yuzler/10.0);
	    yeniucler=birler;
	    yenidortler=onlar;
	    printf("soylediginiz sayinin sifrelenmis hali: %d%d%d%d%d" , binler,yenidortler,yeniucler,yeniikiler,yenibirler);	
		}	
	}
	else if (birler<10 && onlar>=10) {                
	    if (binler<10 && yuzler<10){
	    	yenibirler=onlar/10.0;
	    	yenidortler=onlar%10;
	    	printf("soylediginiz sayinin sifrelenmis hali: %d%d%d%d%d" , binler,yenidortler,yuzler,birler,yenibirler);
	   	}
		else if (binler<10 && yuzler>=10){
			yenibirler=onlar/10.0;
			yeniikiler=yuzler%10;   
			yenidortler=onlar%10;
			yuzler=yuzler/10.0;
			printf("soylediginiz sayinin sifrelenmis hali: %d%d%d%d%d%d" , binler,yuzler,yenidortler,birler,yeniikiler,yenibirler);
		}
		else if (binler>=10 && yuzler<10){
			yenibirler=onlar/10.0;
			yenidortler=onlar%10;
			printf("soylediginiz sayinin sifrelenmis hali: %d%d%d%d%d" , binler,yenidortler,birler,yuzler,yenibirler);
		}
		else {
		yenibirler=(onlar/10.0);
		yeniikiler=(yuzler%10);      
		yeniucler=birler;
		yenidortler=(onlar%10);
		yuzler=yuzler/10.0;
		printf("soylediginiz sayinin sifrelenmis hali: %d%d%d%d%d%d" , binler,yuzler,yenidortler,yeniucler,yeniikiler,yenibirler);
	}
	}
	else if (birler>=10 && onlar<10) {   
	  if (binler>=10 && yuzler<10)
	      printf("soylediginiz sayinin sifrelenmis hali: %d%d%d%d" , binler,birler,yuzler,onlar);
	  else if (binler<10 && yuzler>=10){
	  	 yeniikiler=yuzler%10;
	  	 yeniucler=birler%10;
	  	 yenidortler=birler/10.0;
	  	 yuzler=yuzler/10.0;
	  	 printf("soylediginiz sayinin sifrelenmis hali: %d%d%d%d%d%d" , binler,yuzler,yenidortler,yeniucler,yeniikiler,onlar);
	  }
	 else if (binler<10 && yuzler<10)
	 	printf("soylediginiz sayinin sifrelenmis hali: %d%d%d%d" , binler,birler,yuzler,onlar);
	else {
		yenibirler=onlar;
		yeniikiler=yuzler%10;            
		yeniucler=birler%10;
		yenidortler=birler/10.0;
		yuzler=yuzler/10.0;
		printf("soylediginiz sayinin sifrelenmis hali: %d%d%d%d%d%d" , binler,yuzler,yenidortler,yeniucler,yeniikiler,yenibirler);
	}
	}
    else {
    
	yenibirler=(onlar%10);
	yeniikiler=(birler/10.0);
	yeniucler=(birler%10);
	yenidortler=(onlar/10.0); 
	printf("soylediginiz sayinin sifrelenmis hali:%d%d%d%d%d%d" ,binler,yuzler,yenidortler,yeniucler,yeniikiler,yenibirler);
}
    
	printf("\nsifrelenmis sayiyi giriniz:");
	scanf("%d", &sifre);
	
	printf("girdiginiz sayinin eski hali: %d",deger);
    
}
	
	
	
	else
    printf("\ngirdiginiz sayi 4 basamakli degil");
    
    
	return 0;
}
