#include <stdio.h>

int main ()
{
	
	/*                -ATAMALAR-
	
	de�i�ken (variable)= ifade (expression) --> atama durumunda ilk �nce sa� taraftaki i�lem yap�l�r sonra atama yap�l�r.
	
	�rnek:
	int x=6;
	int y=7;
	x=y; (y nin de�eri x e atan�r. Sonu� olarak x=7 y=7 olur.)
	
	y= x+1; (x+1 hesaplan�r 8 ��kar ve y art�k 8 olur. x=7 y=8. (yukardaki i�leminde devam� olarak d���n�lmeli.))
	
	
	
	>>> x+1=2; (bu t�r �eyler C de ge�erli de�ildi. Sol taraftaki de�er saf bir de�i�ken olmal�d�r. x , y gibi) <<<
	
	
	         
	              -ARTIRMA/AZALTMA-
	              
	  i= i+1;  (i+=1 de ayn� i�lem) --> i 1 artar yeni i nin de�eri i+1 olur.
	  
	  i++ ve ++i de i yi art�rmak i�in kullan�lan ba�ka y�ntemlerdir.
	  
	  postfix= i++;
	  prefix= ++i;
	  
	  Aras�ndaki fark: 
	  int i = 4;
	  printf("%d" , i++);  --> ekrana 4 de�eri bas�l�r. ��nk� postfix (i++) i nin art�rmadan �nceki de�erini kullan�r bir sonraki sat�rda art�r�r.
	  
	  printf("%d" , ++i); -->  ekrana 5 de�eri bas�l�r. ��nk� prefix halinde (++i) i nin direk artm�� halini kullan�r. 
	  
	  i-- , --i   ayn� mant�kla �al���r.
	  
*/

/*
    int i = 4; 
	printf("%d \n" , i++);    
	printf("%d \n" , i);
    printf ("%d \n" , ++i);
	printf("%d \n" , i);
	                          */
	                          
	                          
	                          
	
	/*   i = i *(a+1) ifadesi  i * =a+1  ifadesine e�ittir.
	
	i� i�e atamalar:
	
	i = j = k = 0;
	bu �ekilde bir atama varsa en sa�dan ba�lanarak atama i�lemi yap�l�r. Sonu� olarak hepsi 0 a e�it olmu� oluyor. */
	
	
	
	int x= 5;
	int y =7;
	int z= 2;
	
	x=y;
	
	printf("%d %d\n",x ,y);
	
	y=x+z+5;
	
	printf("%d %d\n" ,x, y);
	
	x= 75;
	y= 33;
	z=100;
	
	 printf("x: %d  y:%d  z:%d \n" , --x, y++ , ++z);   // 74 33 101 -- 74 34 101 --- 74 35 101 --- 73 35 101--- 72 35 102--- 72 35 102
	 printf("x: %d  y:%d  z:%d\n " , x, y , z);                    
	 printf("x: %d  y:%d  z:%d \n" , x--, ++y , z++);
	 printf("x: %d  y:%d  z:%d\n " , x, y-- , --z);
	 printf("x: %d  y:%d  z:%d \n" , --x, ++y , ++z);
	 printf("x: %d  y:%d  z:%d \n" , x, y , z);
	
	
	
	x= 51;
	y= 3;
	x*=y*5;
	
	printf("%d %d\n",x,y);
	
	x*=y*5;
	y=x;
	
	printf("%d %d\n",x,y);
	
	x*=y*5;
	y=x;
	
	printf("%d %d",x,y);
	
	
	
	
	
	
	return 0;
}
