#include <stdio.h>

int main ()
{
	
	/*                -ATAMALAR-
	
	deðiþken (variable)= ifade (expression) --> atama durumunda ilk önce sað taraftaki iþlem yapýlýr sonra atama yapýlýr.
	
	örnek:
	int x=6;
	int y=7;
	x=y; (y nin deðeri x e atanýr. Sonuç olarak x=7 y=7 olur.)
	
	y= x+1; (x+1 hesaplanýr 8 çýkar ve y artýk 8 olur. x=7 y=8. (yukardaki iþleminde devamý olarak düþünülmeli.))
	
	
	
	>>> x+1=2; (bu tür þeyler C de geçerli deðildi. Sol taraftaki deðer saf bir deðiþken olmalýdýr. x , y gibi) <<<
	
	
	         
	              -ARTIRMA/AZALTMA-
	              
	  i= i+1;  (i+=1 de ayný iþlem) --> i 1 artar yeni i nin deðeri i+1 olur.
	  
	  i++ ve ++i de i yi artýrmak için kullanýlan baþka yöntemlerdir.
	  
	  postfix= i++;
	  prefix= ++i;
	  
	  Arasýndaki fark: 
	  int i = 4;
	  printf("%d" , i++);  --> ekrana 4 deðeri basýlýr. Çünkü postfix (i++) i nin artýrmadan önceki deðerini kullanýr bir sonraki satýrda artýrýr.
	  
	  printf("%d" , ++i); -->  ekrana 5 deðeri basýlýr. Çünkü prefix halinde (++i) i nin direk artmýþ halini kullanýr. 
	  
	  i-- , --i   ayný mantýkla çalýþýr.
	  
*/

/*
    int i = 4; 
	printf("%d \n" , i++);    
	printf("%d \n" , i);
    printf ("%d \n" , ++i);
	printf("%d \n" , i);
	                          */
	                          
	                          
	                          
	
	/*   i = i *(a+1) ifadesi  i * =a+1  ifadesine eþittir.
	
	iç içe atamalar:
	
	i = j = k = 0;
	bu þekilde bir atama varsa en saðdan baþlanarak atama iþlemi yapýlýr. Sonuç olarak hepsi 0 a eþit olmuþ oluyor. */
	
	
	
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
