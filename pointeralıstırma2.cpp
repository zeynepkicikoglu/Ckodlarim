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
	
	
	//paint ile ram �izip anlamaya �al��mak daha kolay ama yaz� ile anlatmak gerekirse: ram �zerinde i ,j,jp1 ve jp2 diye belli alan belirleniyor.
	// daha sonra jp2 ye j nin adrsesi tan�mlan�yor ve bu arada j nin de�eri 1. daha sonra jp2  jp1 e e�itlendi�inden jp1 in de�eri de 1 oluyor. 
	// sonra jp2 nin adresindeki de�er 1 art�r�l�p i ye e�itleniyor art�k i nin de�eri 2 oluyor ve ++ on tarafta oldugundan jp2 nin degeri daha sonra
//	1 art�r�l�p 2 oluyor. Dolay�s�yla art�k jp1 de 2 oluyor i ile toplan�nca 4 oluyor ve adresine art�k yeni de�er olan 4 yaz�l�yor.
	
	
	return 0;
}








