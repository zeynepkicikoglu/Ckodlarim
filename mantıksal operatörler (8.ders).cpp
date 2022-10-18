#include <stdio.h>

int main()
{
	/*  mantýksal ifadeler doðru ise true yanlýþ ise false ayný zamanda bütün 0 olmayan sayýlar true sayýlýr. 0 ise false deðerdedir.
	   
	   mantýksal operatörler:
	   
	   <  : küçük müdür? a<b 
	   >  : büyük müdür? a>b
	   <= : küçük ya da eþit midir a<=b þeklinde
	   >= : büyük ya da eþit midir a>=b þeklinde
	   == : eþit midir a==b þeklinde
	   != : eþit deðil midir a!=b þeklinde
	   
	   mantýksal baðlaçlar:
	   
	   birçok mantýksal ifadeyi, iþlemi baðlayan araçlardýr.
	   && ---> mantýksal and ("ve") baðlacý. true && false && false þeklinde baðlanabilir. && olduðu cümlenin doðru olabilmesi için tüm iþlemlerin true 
	   olmasý gerekir. Bir tane false bile olsa iþlemin sonucu false olur.
	   
	   || ---> mantýksal or ("ya da") baðlacý. true || false || false þeklinde baðlanabilir. || olduðu cümlenin doðru olabilmesi için en az bir iþlemin true 
	   olmasý gerekir. Hepsi false ise iþlemin sonucu false olur.
	
	   ! ---> mantýksal not ("deðil") baðlacý. doðru iþlemi yannlýþ , yanlýþý doðru yapar.
	   
	   
	   ÞARTLI CÜMLELER
	   
	  a = x > y  ? x : y ;  */
	  
	  int a,b=20,c=30;
	  a = b < c ? b : c; //b küçük c ise bu ifadenin deðeri b olsun deðil ise c olsun demektir.
	  
	  printf("%d",a);
	   
	  
	
	
	return 0;
}
