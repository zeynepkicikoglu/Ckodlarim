#include <stdio.h>

int main() {
	
	
	int i=5;
	int *p=&i;
	
	printf("%p\n",p); //i nin ger�ekteki adresi (bilgisayar�n ramindeki adresi g�sterir)
	printf("%u\n",p); // %p ile ayn� %u da sadece biri heximal di�eri say�
	printf("%d",*p); // * y�ld�z adresteki de�eri verir.
	
	return 0;
	
	
	// & de�i�kenin adres bilgisini veriyo
	// * adresteki de�eri verir
	
}
