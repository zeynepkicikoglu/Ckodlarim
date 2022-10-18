#include <stdio.h>
#include <math.h>
int main()
{
	
	int a,b,c;
	float X1,X2;
	float delta;
	
	printf("denklemin a sini giriniz:");
	scanf("%d" ,&a);
	printf("denklemin b sini giriniz:");
	scanf("%d" ,&b);
	printf("denklemin c sini giriniz:");
	scanf("%d" ,&c);
	
	
	delta=b*b-4*a*c;
	X1= (-b+ (sqrt(delta)))  /2*a;
	
	X2= (-b- (sqrt(delta)) ) /2*a;
	printf("denklemin 1. koku %.2f , ikinci koku %.2f dir" ,X1,X2);
	
	
	
	
	return 0;
}
