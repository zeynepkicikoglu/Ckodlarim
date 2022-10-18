#include <stdio.h>
#define PI 3.14
int main()
{
	
	int yaricap;
	float hacim;
	
	printf("lutfen yaricapi giriniz: \n" ,yaricap);
	scanf("%d" , &yaricap);
	
	hacim= (4/3.0)*PI*(yaricap*yaricap*yaricap);
	
	printf("kurenin hacmi %f dir" ,hacim);
	
	
	
	return 0;
}
