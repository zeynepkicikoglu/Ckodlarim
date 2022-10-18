#include<stdio.h>
int main(){
	
	FILE *filep;
	char text[256];
	filep=fopen("yaz.txt","a");
	
	if(filep==NULL)
	{
		printf("dosya olusmadi");
		
	}
	else{
		
		printf("bir sey yazin:");
		fgets(text,256,stdin);
		fputs(text,filep);
		printf("dosyaya basariyla yazildi.");
		fclose(filep);
		// fputs string yazarken fputc karakter yazar.
	}
	
	
	
	
	return 0;
}
