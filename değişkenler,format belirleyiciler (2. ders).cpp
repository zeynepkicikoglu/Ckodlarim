#include <stdio.h>

  int main()
{
 
 
    // Tek yorum sat�r�d�r. Buraya yaz�lanlar g�r�nmez. A��klamalar i�in kullan�l�r.
    
    /*
     
     �oklu yorum sat�r�d�r. 
     Buray� diledi�iniz gibi doldurabilirsiniz. G�r�nmezler.

        
    
    */
 
 
 /*    -DE���KENLER-
    Temel De�i�kenlerimiz: int, char, float, double,  short, long...
    
    char veritipi: 1 byte (8 bit) 0 dan 255 e kadar (2^8) de�er alabilir. Her bir de�er ASCII tablosundaki bir de�ere e�de�erdir.
    int veritipi:  4 byte (32 bit) (-2^16 , +2^16) aras�ndaki tamsay� de�erlerini al�r.
    short veritipi: 2 byte (16 bit) (-2^8 , +2^8) aras�ndaki tamsay� de�erlerini al�r. K���k say�lar i�in kullan�l�r.
    long veritipi: 8 byte (64 bit) (-2^32 , +2^32) aras�ndaki tamsay� de�erlerini al�r. �ok b�y�k say�lar i�in kullan�l�r.
    float veritipi: Kesirli say�lar� tutmak i�in kullan�l�r. 2.12 , 3.4 gibi...
    double veritipi: Floattan daha kapsaml� kesirli say�lar� tutmak i�in kullan�l�r. 2.534745856524 gibi...
    
    
    
       -FORMAT BEL�RLEY�C�LER-
    
    %d --> int de�erler i�in kullan�l�r.
    �rnek:
    int x = 5;
    printf("%d" , x); --> ekrana 5 de�eri bas�l�r.
    
    
    %f --> float ve double de�erleri i�in kullan�l�r.
    
	%c --> char i�in kullan�l�r.
	�rnek:
	char x= 'z';
	printf("%c" ,x); --> ekrana z bas�l�r.
	printf("%d" ,x); --> ekrana ASCII tablosundaki de�er bas�l�r.
	
	%s --> karakterdizileri i�in kullan�l�r. ("hello world") gibi...  */
	
	
	
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
