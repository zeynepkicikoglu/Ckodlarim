#include <stdio.h>

int main ()
{
	
	int a,b,c,d,e;
	float average;
	printf("please write 5 numbers:");
	scanf("%d%d%d%d%d" , &a,&b,&c,&d,&e);
	
	average= (a+b+c+d+e)/5.0;
	printf("the average is : %f" ,average);
	
	
	
	
	
	return 0;
}
