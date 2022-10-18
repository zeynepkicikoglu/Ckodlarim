#include <stdio.h>

int main()
{
	int i,karesi,kupu;
	
	printf("sayi      karesi      kupu \n");
	
	i=0;
	
	for(i=0;i<=10;i++) {
		
	
	karesi=i*i;
	kupu=i*i*i;
	printf("%d %10d %11d \n",i,karesi,kupu);
		
		
		
	}
	
	
	
	return 0;
}
