#include <stdio.h>

  int main()
{
 
 
    // Tek yorum satýrýdýr. Buraya yazýlanlar görünmez. Açýklamalar için kullanýlýr.
    
    /*
     
     Çoklu yorum satýrýdýr. 
     Burayý dilediðiniz gibi doldurabilirsiniz. Görünmezler.

        
    
    */
 
 
 /*    -DEÐÝÞKENLER-
    Temel Deðiþkenlerimiz: int, char, float, double,  short, long...
    
    char veritipi: 1 byte (8 bit) 0 dan 255 e kadar (2^8) deðer alabilir. Her bir deðer ASCII tablosundaki bir deðere eþdeðerdir.
    int veritipi:  4 byte (32 bit) (-2^16 , +2^16) arasýndaki tamsayý deðerlerini alýr.
    short veritipi: 2 byte (16 bit) (-2^8 , +2^8) arasýndaki tamsayý deðerlerini alýr. Küçük sayýlar için kullanýlýr.
    long veritipi: 8 byte (64 bit) (-2^32 , +2^32) arasýndaki tamsayý deðerlerini alýr. Çok büyük sayýlar için kullanýlýr.
    float veritipi: Kesirli sayýlarý tutmak için kullanýlýr. 2.12 , 3.4 gibi...
    double veritipi: Floattan daha kapsamlý kesirli sayýlarý tutmak için kullanýlýr. 2.534745856524 gibi...
    
    
    
       -FORMAT BELÝRLEYÝCÝLER-
    
    %d --> int deðerler için kullanýlýr.
    örnek:
    int x = 5;
    printf("%d" , x); --> ekrana 5 deðeri basýlýr.
    
    
    %f --> float ve double deðerleri için kullanýlýr.
    
	%c --> char için kullanýlýr.
	örnek:
	char x= 'z';
	printf("%c" ,x); --> ekrana z basýlýr.
	printf("%d" ,x); --> ekrana ASCII tablosundaki deðer basýlýr.
	
	%s --> karakterdizileri için kullanýlýr. ("hello world") gibi...  */
	
	
	
	int a=42;
	char b= 66;
	char c= 'Z';
	float d= 4.5;
	double f= 0.31;
	
	printf("%d %d %c %d %c %.1f %.2f %s\n", a,b,b,c,c,d,f,"merhaba zeynep");
	
	
	
	printf("%d byte\n" ,sizeof (char));
	printf("%d byte\n" ,sizeof (int));
	printf("%d byte\n" ,sizeof (float));
	printf("%d byte\n" ,sizeof (double));
	printf("%d byte\n" ,sizeof (long int));
	printf("%d byte\n" ,sizeof (short int));
	
	
	
	
	
	return 0;
}
