#include <stdio.h>
int main( ) {
	
	float toplam=0.0;
	float sayilar[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("bir sayi giriniz:\n");
		scanf("%f",&sayilar[i]);
		toplam+=sayilar[i];
	}
	



printf("girdiginiz sayilarin aritmetik ortalamsi %.2f dir",toplam/5);
	
	
	return 0;
}
