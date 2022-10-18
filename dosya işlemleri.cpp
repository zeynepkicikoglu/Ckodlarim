#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


// fseek / fsetpos --> dosya içerisinde göstericiyi hareket ettirir.
// ftell / fgetpos --> dosya götericisinin yerini söyler. 

// r+ : dosyayý okuma ve yazma çin açar ve dosyanýn baþýný gösterir
// w+ : dosyayý okuma ve yazmak için açar ve mevcut dosyanýn üzerine yazar.
// a+ : dosyayý okuma ve yazma için açar ve dosyaya ekleme yapar.


/*
int main(){
	FILE *outfile, *infile;
	int b=5,f;
	float a=13.72, c=6.68,e,g;
	outfile=fopen("testdata","w");
	fprintf(outfile, "%f %d %f",a,b,c);
	fclose(outfile);
	infile=fopen("testdata","r");
	fscanf(infile,"%f %d %f",&e,&f,&g);
	printf("%f %d %f \n",a,b,c);
	printf("%f %d %f \n",e,f,g);
	
	return 0;
} 


int main(){
	char ch;
	FILE *fp;
	fp=fopen("out.txt","r");
	while(!feof(fp)){
		ch=getc(fp);
		printf("\n%c",ch);
	}
	return 0;
} 

int main(){
	FILE *f;
	char buffer[11];
	if(f=fopen("out.txt","r")){
		fread(buffer,1,10,f);
		buffer[10]=0;
		fclose(f);
		printf("dosyanin ilk 10 karakteri:\n%s\n",buffer);
	}
	else{
		printf("dosya acilamadi bir hata olustu");
	}
	return 0;
} 


int main(){
	
	char a[10]={'1','2','3','4','5','6','7','8','9','a'};
	FILE *fs;
	fs=fopen("project.txt","w");
	fwrite(a,1,10,fs);
	fclose(fs);
	return 0;
}  

int main() {
	
	FILE *f;
	f=fopen("myfile.txt","w");
	fputs("selam zeynep",f);
	fseek(f,5,SEEK_SET);
	fputs("zk",f);
	fclose(f);
	return 0;
	
} */

// SEEK_SET dosyanýn baþýndan
// SEEK_CUR  cursor(imleç)'un oldugu yerden
// SEEK_END dosyanýn sonundan


int main(void){
	FILE *stream;
	stream= fopen("MYFILE.TXT","w");
	fprintf(stream,"bilgisayar kavramlari");
	printf("dosyadaki konum: %ld\n", ftell(stream));
	fclose(stream);
	
	return 0;
}






















