#include <stdio.h>

int main()
{
	/*  mant�ksal ifadeler do�ru ise true yanl�� ise false ayn� zamanda b�t�n 0 olmayan say�lar true say�l�r. 0 ise false de�erdedir.
	   
	   mant�ksal operat�rler:
	   
	   <  : k���k m�d�r? a<b 
	   >  : b�y�k m�d�r? a>b
	   <= : k���k ya da e�it midir a<=b �eklinde
	   >= : b�y�k ya da e�it midir a>=b �eklinde
	   == : e�it midir a==b �eklinde
	   != : e�it de�il midir a!=b �eklinde
	   
	   mant�ksal ba�la�lar:
	   
	   bir�ok mant�ksal ifadeyi, i�lemi ba�layan ara�lard�r.
	   && ---> mant�ksal and ("ve") ba�lac�. true && false && false �eklinde ba�lanabilir. && oldu�u c�mlenin do�ru olabilmesi i�in t�m i�lemlerin true 
	   olmas� gerekir. Bir tane false bile olsa i�lemin sonucu false olur.
	   
	   || ---> mant�ksal or ("ya da") ba�lac�. true || false || false �eklinde ba�lanabilir. || oldu�u c�mlenin do�ru olabilmesi i�in en az bir i�lemin true 
	   olmas� gerekir. Hepsi false ise i�lemin sonucu false olur.
	
	   ! ---> mant�ksal not ("de�il") ba�lac�. do�ru i�lemi yannl�� , yanl��� do�ru yapar.
	   
	   
	   �ARTLI C�MLELER
	   
	  a = x > y  ? x : y ;  */
	  
	  int a,b=20,c=30;
	  a = b < c ? b : c; //b k���k c ise bu ifadenin de�eri b olsun de�il ise c olsun demektir.
	  
	  printf("%d",a);
	   
	  
	
	
	return 0;
}
