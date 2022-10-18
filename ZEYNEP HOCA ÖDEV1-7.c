#include <stdio.h>
int main() {
	
	
	int satirsayisi, sutunsayisi;
	int bosluk = 0;
	
	for(satirsayisi=0; satirsayisi<=5; satirsayisi++) {
		
		for(sutunsayisi=0; sutunsayisi<satirsayisi; sutunsayisi++) {
			
			if(sutunsayisi%2 == 0) {
				printf("0");
			}
			
			else {
				printf("1");
			}
		}
	

    if(bosluk==1) 
	printf("        ");
	
	else if(bosluk==2) 
	printf("      ");

	else if(bosluk==3) 
	printf("    ");
	
	else if(bosluk==4) 
	printf("  ");
	

	for(sutunsayisi=0;sutunsayisi<satirsayisi;sutunsayisi++){
		
		if(sutunsayisi%2==0) {
		    printf("0");
		}
			
		else {
	     	printf("1");
	   }
	   
	}
	
    ++bosluk;
	printf("\n");
	
	
	}
	
	
	return 0;
}
