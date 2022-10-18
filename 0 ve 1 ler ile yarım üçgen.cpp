#include <stdio.h>

int main() {
	
	int i,j,k;
	i=0;
	j=8;
	
	for(i=0;i<=4;i++)
	{  
	  printf("0",i);
		for(j=8;j<=0;j-=2); 
		{
		
		printf("/t",j);
		for(k=0;k<=j;k++)
		{
			if (k%2==0)
			 printf("0");
			else 
			printf("1"); 
		}	
		printf("\n");
		}
		
		
}
	
	return 0;
}
