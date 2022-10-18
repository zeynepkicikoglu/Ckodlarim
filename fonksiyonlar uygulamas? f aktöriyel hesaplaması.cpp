#include <stdio.h>

int faktoriyel(int);
int main()
{
	
	
	int toplam;
	toplam=faktoriyel(1)/1+faktoriyel(2)/2+faktoriyel(3)/3+faktoriyel(4)/4+faktoriyel(5)/5;
	printf("girmis oldugunuz serinin toplami= %d" ,toplam);
	

	return 0;

	
}

int faktoriyel(int =5) {
	
	
	int i;
	int f=1;
	for (i=5; i>=1;i--)
	f=f*i;
	return f;
}
