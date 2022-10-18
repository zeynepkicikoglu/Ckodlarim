#include <stdio.h>
#include <string.h>
int main(void)
{
  char isim[25][50],gecici[25];
  int n,i,j;
  
       
  printf("Siralanacak string sayisini giriniz :");
  scanf("%d",&n);

 printf("String giriniz %d :\n",n);
  for(i=0;i<=n;i++)
  {
       
       fgets(isim[i], sizeof isim, stdin);
  }



    for(i=1;i<=n;i++){
	for(j=0;j<=n-i;j++)
	  if(strcmp(isim[j],isim[j+1])>0)
	  { 
            strcpy(gecici,isim[j]);
	        strcpy(isim[j],isim[j+1]);
	        strcpy(isim[j+1],gecici);
	  }
    }
	  
    printf("Stringler siralamasi :\n");
    for(i=0;i<=n;i++)
		 printf("%s\n",isim[i]);
		 
		 
		 return 0;
 
}
