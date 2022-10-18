#include <stdio.h>
#include <string.h>
int benimstrlen(char *p){
	int uzunluk=0,i=0;
	
	for(; p[i]!= '\0' ; i++){
		
		
		uzunluk++;
	
	}
	return uzunluk;
}
int main() {
	
	char text[]= "tura";
	
	char *p = text;
	
	printf("%s \n",text);
	printf("%s \n",p);
	printf("%s \n",p+1);
	printf("%s \n",p+2);
	printf("%s \n",p+3);
	printf("%s \n",p+4);
	
	printf("%d\n", strlen(text));
	printf("%d", benimstrlen(text));
	
	
	return 0;
}


