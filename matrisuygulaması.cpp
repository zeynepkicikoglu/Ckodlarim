#include <stdio.h>
int main() {
	
	 
	 /*  1 2 3 
	     4 5 6
	     7 8 9  */
	
	
	
/*	int matris[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
	
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d " , matris[i][j]);
		}
		printf("\n");
	}
	                     */
	                     
	                     
   int matris[3][3];
   int a,b;
   
   
   
   for(a=0;a<3;a++){
   	 for(b=0;b<3;b++){
   	 	scanf("%d" , &matris[a][b]);
   	 	
		}
   }
	
	
	 
   for(a=0;a<3;a++){
   	 for(b=0;b<3;b++){
   	 	printf("%d " , matris[a][b]);
   	 	
		}
		printf("\n");
   }

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
