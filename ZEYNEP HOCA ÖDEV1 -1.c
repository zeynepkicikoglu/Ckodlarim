#include <stdio.h>

int main(void)

{
	int birler,onlar,yuzler,binler,onbinler;
	int sayi;
	printf("5 basamakli sayi giriniz:" ,sayi);
	scanf("%d" , &sayi); 
	
	birler=sayi%10; 
	onlar=((sayi%100)-birler)/10;
	yuzler=(sayi%1000)/100.0; 
	binler=(sayi%10000)/1000.0;
	onbinler=sayi/10000;
	
	printf("girdiginiz sayinin basamaklarina ayrilmis hali:%d %3d %3d %3d %3d" ,onbinler,binler,yuzler,onlar,birler);
	
	
	return 0;
	
	
}
