#include <stdio.h>
void sirala(float array[],int uzunluk){
	int i,j;
	for(i=0;i<uzunluk;i++){
		for(j=1;j<uzunluk-i;j++){
			if(array[j-1]<array[j]){
				int temp=array[j];
				array[j]=array[j-1];
				array[j-1]=temp;
			}
		}
	}
} 

int main(){
	
	FILE *dosya;
	char isim[20][20], soyisim[20][20],okul[30][30],bolum[30][30];
	int vize[10],final[10],i=0,numaralar[20];
	float ort[10];
	
	
	if((dosya=fopen("kaynak.txt","r"))!=NULL) {
		
		for(i=0;i<10;i++) {
			fscanf(dosya,"%s %s %s %s %d %d %d",&isim[i],&soyisim[i],&okul[i],&bolum[i],&numaralar[i],&vize[i],&final[i]);
			printf("ISIM:%s SOYISIM:%s OKUL:%s BOLUM:%s NUMARA:%d VIZE1:%d FINAL:%d\n",isim[i],soyisim[i],okul[i],bolum[i],numaralar[i],vize[i],final[i]);
	}
}
	else {
		printf("Dosya bulunamadi.");
	}
	
	
	
	int k=0;
	for(k=0;k<10;k++)
	{
		ort[k]=((vize[k]+final[k])/2.0);
	} 

	
	FILE *yeni;
	
	yeni=fopen("yeni.txt","w");
	
	k=0;
	if((yeni=fopen("yeni.txt","w"))!=NULL) {

	    
		for(i=0;i<10;i++) {
	
		fprintf(yeni,"ISIM:%s SOYISIM:%s OKUL:%s BOLUM:%s NUMARA:%d VIZE1:%d FINAL:%d ---> ORT:%.2f\n",isim[i],soyisim[i],okul[i],bolum[i],numaralar[i],vize[i],final[i],ort[i]);

		
	}
}
	else {
		printf("Dosya bulunamadi.");
	}

	int temp=1;
	fprintf(yeni,"\n-Not Ortalama Siralamasi-\n");
	for(i=0;i<10;i++) {

	sirala(ort,10);

	fprintf(yeni,"\n%d.ogrencinin ortalamasi:%.2f\n",temp,ort[i]);
    temp=++temp;
    
}  

    int j;
	for(i=0;i<1;i++) {
		for(j=0;j<1;j++){
		sirala(ort,10);
		fprintf(yeni,"\n Okul birincisi %s %s not ortalamasi:%.2f",isim[j],soyisim[j],ort[i]);
			
		}
	}
    
    fclose(dosya);
    fclose(yeni);
	return 0;
}
