#include <stdio.h>
/*
int main() {
	
	
	
	int a=5, *ap;
	float b=3.2 , *bp;
	double c=3.412 , *cp;
	char d='a',*dp;
	
	
	int sayilar[5]={1,2,3,4,5};
	
	int *arrayp;
	
	ap=&a;
	bp=&b;
	cp=&c;
	dp=&d;
	
	arrayp= &sayilar[1];
	
	
	
	printf("%d adresindeki intin degeri %d dir. \n",ap,*ap);
	printf("%u adresindeki floatin degeri %f  dir. \n",bp,*bp);
	printf("%p adresindeki doublenin degeri %lf  dir. \n",cp,*cp);
	printf("%d adresindeki charin degeri %c  dir. \n",dp,*dp);
	printf("%u adresindeki sayilarin elemaninin degeri %d  dir. \n",arrayp,*arrayp);
	
	
	
	return 0;
}


*/


int main() {
	
	
	int i,j=1;
	int *jp1,*jp2=&j;
	
	jp1=jp2;
	
	i=++(*jp2);
	
	*jp2=*jp1+i;
	
	printf("i=%d , j= %d , *jp1=%d , *jp2=%d",i,j,*jp1,*jp2);
	
	
	//paint ile ram çizip anlamaya çalýþmak daha kolay ama yazý ile anlatmak gerekirse: ram üzerinde i ,j,jp1 ve jp2 diye belli alan belirleniyor.
	// daha sonra jp2 ye j nin adrsesi tanýmlanýyor ve bu arada j nin deðeri 1. daha sonra jp2  jp1 e eþitlendiðinden jp1 in deðeri de 1 oluyor. 
	// sonra jp2 nin adresindeki deðer 1 artýrýlýp i ye eþitleniyor artýk i nin deðeri 2 oluyor ve ++ on tarafta oldugundan jp2 nin degeri daha sonra
//	1 artýrýlýp 2 oluyor. Dolayýsýyla artýk jp1 de 2 oluyor i ile toplanýnca 4 oluyor ve adresine artýk yeni deðer olan 4 yazýlýyor.
	
	
	return 0;
}








