#include <stdio.h>

int main(void){
	
	int kenar1,kenar2,kenar3;
	
	printf("3 tane kenar uzunlugu yaziniz: ",kenar1,kenar2,kenar3);
	scanf("%d%d%d" , &kenar1, &kenar2, &kenar3);
	
        
        if (kenar1*kenar1==kenar2*kenar2+kenar3*kenar3) 
        printf("bu bir dik ucgendir");
        
        else if (kenar2*kenar2== kenar1*kenar1+kenar3*kenar3)
        printf("bu bir dik ucgendir");
        
        else if (kenar3*kenar3== kenar1*kenar1+kenar2*kenar2)
        printf("bu bir dik ucgendir");
        
        else
        printf("bu bir dik ucgen degildir");
        
	
	return 0;
	
	
}
