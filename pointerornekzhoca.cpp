#include<stdio.h>
void yer_degistir(int *a, int *b){
	int temp;
	temp=*a; 
	*a=*b;
	*b=temp;	
}
int main(void){
	int x, y;
	printf("Lutfen iki tamsayi giriniz\n");
	scanf("%d%d", &x, &y);
	printf("Swap islemi yapilmadan once degiskenlerin degeri x:%d y:%d dir\n", x,y);
	yer_degistir(&x, &y);
	printf("Swap islemi yapildiktan sonra degiskenlerin degeri x:%d y:%d dir\n", x,y);
	return (0);
}
