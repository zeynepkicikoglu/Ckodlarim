#include <stdio.h>

int main() {
	
	
	int i=5;
	int *p=&i;
	
	printf("%p\n",p); //i nin gerçekteki adresi (bilgisayarın ramindeki adresi gösterir)
	printf("%u\n",p); // %p ile aynı %u da sadece biri heximal diğeri sayı
	printf("%d",*p); // * yıldız adresteki değeri verir.
	
	return 0;
	
	
	// & değişkenin adres bilgisini veriyo
	// * adresteki değeri verir
	
}
