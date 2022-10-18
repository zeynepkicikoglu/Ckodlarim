#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct filmler{
	char isim[30];
	char yonetmen[30];
	char oyuncular[50];
	float sure;
	float imdbpuani;
};
void goster(struct filmler *a){
	printf("\n\nIsim:%s\nYonetmen:%s\nOyuncular:%s...\nSuresi:%.2f saat\nImdb Puani:%.1f/10",a->isim,a->yonetmen,a->oyuncular,a->sure,a->imdbpuani);
}
int biletodeme(int biletsayisi, int cevap){
	int tutar,tam,ogrenci;
	printf("\n----------------BILET FIYATLARI---------------\n");
	printf("Tam Fiyat: 30TL\nOgrenci Fiyat: 15TL");
	
	while(biletsayisi>1){	
		printf("\n\nKac tane tam bilet kac tane ogrenci bileti alicaksiniz?(Hatirlatma:%d adet bilet almak istediginizi girdiniz.)\n",biletsayisi);
		printf("Tam bilet adeti:");
		scanf("%d",&tam);
		printf("\nOgrenci bilet adeti:");
		scanf("%d",&ogrenci);
		tutar=((tam*30)+(ogrenci*15));
		break;
	}
 	while(biletsayisi==1){
 	if (cevap==1){
 	tutar=(biletsayisi*15);	
	}
 	else if(cevap==2){
 	tutar=(biletsayisi*30);
	}
	break;
 	}
    return tutar;
}
int koltuknoalma(int biletsayisi){
  
  int koltukno1,koltukno2,koltukno3;
  char koltukharf,koltukharf2,koltukharf3;
  int i,j;
  for(i=70;i>=65;i--){
  for(j=1;j<=10;j++){
  printf("%c-%d || ",i,j);
     
 }
 printf("\n\n");
  }
   printf("---------------------------------EKRAN------------------------------------");

 if(biletsayisi==1){
   	printf("\n%d adet koltuk secme hakkiniz vardir.",biletsayisi);
   	printf("\nHangi harfdeki koltugu istiyorsunuz:");
    scanf("%s",&koltukharf);
    printf("\n%c harfindeki hangi sayili koltugu istiyorsunuz:",koltukharf);
    scanf("%d",&koltukno1);
    printf("\n%c-%d numarali %d adet koltuk sizin icin ayrilmistir.",koltukharf,koltukno1,biletsayisi);
   }
   
   else if(biletsayisi==2){
   	printf("\n%d adet koltuk secme hakkiniz vardir.",biletsayisi);
   	printf("\nHangi harflerdeki koltuklari istiyorsunuz:");
    scanf("%s %s",&koltukharf,&koltukharf2);
    printf("\n%c %c harflerindeki hangi sayili koltuklari istiyorsunuz:",koltukharf,koltukharf2);
    scanf("%d %d",&koltukno1,&koltukno2);
    printf("\n%c-%d ve %c-%d numarali %d adet koltuk sizin icin ayrilmistir.",koltukharf,koltukno1,koltukharf2,koltukno2,biletsayisi);
   }
   else if(biletsayisi==3){
   	printf("\n\n%d adet koltuk secme hakkiniz vardir.",biletsayisi);
   	printf("\nHangi harflerdeki koltuklari istiyorsunuz:");
    scanf("%s %s %s",&koltukharf,&koltukharf2,&koltukharf3);
    printf("\n%c %c %c harflerindeki hangi sayili koltuklari istiyorsunuz:",koltukharf,koltukharf2,koltukharf3);
    scanf("%d %d %d",&koltukno1,&koltukno2,&koltukno3);
    printf("%c-%d,%c-%d,%c-%d numarali %d adet koltuk sizin icin ayrilmistir.",koltukharf,koltukno1,koltukharf2,koltukno2,koltukharf3,koltukno3,biletsayisi);
   }
   else{
   	printf("3'ten fazla koltuk secemezsiniz.");
   }
}

int main(void){
	
	int mekansecimi,tursecimi,filmsecimi,biletsayisi,cevap,cevap2;
    float seans;
	printf("~~~~~~~~~~~~ZK'nin sinemasina hos geldiniz!~~~~~~~~~~~~~~");
    printf("\n\nOgrenci misiniz? (1-EVET/2-HAYIR):");
    scanf("%d",&cevap);
    while(cevap!=1 && cevap!=2){
    printf("Lutfen gecerli bir rakam giriniz.");
    printf("\n\nOgrenci misiniz? (1-EVET/2-HAYIR):");
    scanf("%d",&cevap);
	}
	printf("\nIstanbul'daki ZK sinemasinin bulundugu mekanlar:\n1-Kozzy AVM\n2-Hilltown\n3-Akasya AVM");
	printf("\nSinemayi kacinci mekanda izlemek istiyorsunuz:");
	scanf("%d",&mekansecimi);
	
	system("CLS");   //ekraný temizlemeyi saðlar.

	switch(mekansecimi){	
	case 1: //Kozzy AVM
        printf("\nKozzy AVM ZK Sinemasina hos geldiniz:\n");
		printf("Film turleri:\n1-korku\n2-dram\n3-komedi\n4-aksiyon\n5-bilimkurgu\n");
		printf("Kacinci film turunu izlemek istiyorsunuz:");
		scanf("%d",&tursecimi);
		if(tursecimi==1){
			printf("\n-----Vizyondaki Korku Filmleri-----");
			struct filmler korkufilmi1={"Kacis Yok","John Erick Downdle","Holland Roden,Keegan Allen,Ronen Rubinstein",1.43,6.8};
	        goster(&korkufilmi1);
	        struct filmler korkufilmi2={"Seytanin Muhru","Evan Spiliotopoulos","Jeffrey Dean Morgan,Cricket Brown,Marina Mazepa",1.39,5.1};
	        goster(&korkufilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	int i,j;
	        	printf("\nKacis Yok filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  11.00/14.00  ");
	        			if(i==1 && j==18)
	        			printf("15.00/22.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  16.00/20.00  ");
	        			if(i==2 && j==18)
	        			printf("12.00/18.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}	
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
				}
				else{
	        	int i,j;
	        	printf("\nSeytanin Muhru filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  09.00/00.00  ");
	        			if(i==1 && j==18)
	        			printf("10.00/23.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  13.00/17.00  ");
	        			if(i==2 && j==18)
	        			printf("11.00/19.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);		
		}
	}
	if(tursecimi==2){
			printf("\n-----Vizyondaki Dram Filmleri-----");
			struct filmler dramfilmi1={"Parazit","Bong Joon-ho","Park So-dam,Cho Yeo-jeong,Choi Woo-shik",2.12,8.1};
	        goster(&dramfilmi1);
	        struct filmler dramfilmi2={"Babam ve Oglum","Cagan Irmak","Fikret Kuskan,Cetin Tekindor,Yetkin Dikinciler",1.48,8.1};
	        goster(&dramfilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	int i,j;
	        	printf("\nParazit filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=1;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("2D  11.00/14.00  ");
	        			if(i==1 && j==18)
	        			printf("15.00/22.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("\nSectiginiz seanstaki saati girin:");
				scanf("%f",&seans);			
				}
				else{
	        	printf("\nBabam ve Oglum filminin seanslari:\n\n2D  11.30/15.30/20.30/22.00");
				printf("\nSectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
		}	        
}
	if(tursecimi==3){
			printf("\n-----Vizyondaki Komedi Filmleri-----");
			struct filmler komedifilmi1={"Dugun Dernek","Selcuk Aydemir","Rasim Oztekin,Ahmet Kural,Murat Cemcir",1.46,7};
	        goster(&komedifilmi1);
	        struct filmler komedifilmi2={"Aile Arasinda","Ozan Aciktan","Gulse Birsel,Engin Gunaydin,Demet Evgar",2.04,7.7};
	        goster(&komedifilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	printf("\nDugun Dernek filminin seanslari:\n2D  10.00/12.00/13.00/15.00/20.00/21.00");
				printf("\nSectiginiz seanstaki saati girin:");
				scanf("%f",&seans);			
				}
				else{
	        	printf("\nAile Arasinda filminin seanslari:\n 2D  12.30/14.20/16.00/18.15/20.40");
				printf("\nSectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
		}		        
  }
  		if(tursecimi==4){
			printf("\n-----Vizyondaki Aksiyon Filmleri-----");
			struct filmler aksiyonfilmi1={"Infinite","Antoine Fuqua","Mark Wahlberg,Sophie Cookson,Dylan O'Brien",1.46,6.1};
	        goster(&aksiyonfilmi1);
	        struct filmler aksiyonfilmi2={"Yarinin Savasi","Chris McKay","Chris Pratt,Yvonne Strahovski,Betty Gilpin",2.20,7.6};
	        goster(&aksiyonfilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	int i,j;
	        	printf("\nInfinite filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  11.00/14.00  ");
	        			if(i==1 && j==18)
	        			printf("15.00/22.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  16.00/20.00  ");
	        			if(i==2 && j==18)
	        			printf("12.00/18.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);			
				}
				else{
	        	int i,j;
	        	printf("\nYarinin Savasi filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  09.00/00.00  ");
	        			if(i==1 && j==18)
	        			printf("10.00/23.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  13.00/17.00  ");
	        			if(i==2 && j==18)
	        			printf("11.00/19.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
		}
	}
	  		if(tursecimi==5){
			printf("\n-----Vizyondaki Bilimkurgu Filmleri-----");
			struct filmler bilimfilmi1={"Black Widow","Cate Shortland","Scarlett Johansson, Florence Pugh, Rachel Weisz",2.13,6.7};
	        goster(&bilimfilmi1);
	        struct filmler bilimfilmi2={"Platform","Galder Gaztelu-Urrutia","Ivan Massagué,Zorion Eguileor,Antonia Juan",1.34,7.0};
	        goster(&bilimfilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	int i,j;
	        	printf("\nBlack Widow filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  11.00/14.00  ");
	        			if(i==1 && j==18)
	        			printf("15.00/22.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  16.00/20.00  ");
	        			if(i==2 && j==18)
	        			printf("12.00/18.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);			
				}
				else{
	        	int i,j;
	        	printf("\nPlatform filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  09.00/00.00  ");
	        			if(i==1 && j==18)
	        			printf("10.00/23.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  13.00/17.00  ");
	        			if(i==2 && j==18)
	        			printf("11.00/19.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
		}     
	}
    break;
   	case 2: // Hilltown
   	    printf("\nHilltown AVM ZK Sinemasina hos geldiniz:\n");
   		printf("Film turleri:\n1-korku\n2-dram\n3-komedi\n4-aksiyon\n5-bilimkurgu\n");
		printf("Kacinci film turunu izlemek istiyorsunuz:");
		scanf("%d",&tursecimi);
		if(tursecimi==1){
			printf("\n-----Vizyondaki Korku Filmleri-----");
			struct filmler korkufilmi1={"The Silence","John R. Leonetti","Stanley Tucci,Miranda Otto,John Corbett",1.30,5.3};
	        goster(&korkufilmi1);
	        struct filmler korkufilmi2={"Hayal Adasi","Jeff Wadlow","Lucy Hale,Michael Peña,Maggie Q",1.48,5.5};
	        goster(&korkufilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	int i,j;
	        	printf("\nThe Silence filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  11.00/14.00  ");
	        			if(i==1 && j==18)
	        			printf("15.00/22.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  16.00/20.00  ");
	        			if(i==2 && j==18)
	        			printf("12.00/18.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
				}
				else{
	        	int i,j;
	        	printf("\nHayal Adasi filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  09.00/00.00  ");
	        			if(i==1 && j==18)
	        			printf("10.00/23.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  13.00/17.00  ");
	        			if(i==2 && j==18)
	        			printf("11.00/19.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
		}
	}
	if(tursecimi==2){
			printf("\n-----Vizyondaki Dram Filmleri-----");
			struct filmler dramfilmi1={"Life in a Year","Mitja Okorn","Jaden Smith,Cara Delevingne,Cuba Gooding",1.47,7.0};
	        goster(&dramfilmi1);
	        struct filmler dramfilmi2={"Kagittan Hayatlar","Can Ulkay","Cagatay Ulusoy,Ersin Arici,Selen Ozturk",1.37,6.7};
	        goster(&dramfilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	int i,j;
	        	printf("\nLife in a Year filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=1;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("2D  11.00/14.00  ");
	        			if(i==1 && j==18)
	        			printf("15.00/22.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("\nSectiginiz seanstaki saati girin:");
				scanf("%f",&seans);			
				}
				else{
	        	printf("\nKagittan Hayatlar filminin seanslari:\n\n2D  11.30/15.30/20.30/22.00");
				printf("\nSectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
		}
	}
	if(tursecimi==3){
			printf("\n-----Vizyondaki Komedi Filmleri-----");
			struct filmler komedifilmi1={"Organize Isler","Yilmaz Erdogan","Cem Yilmaz,Tolga Cevik,Yilmaz Erdogan",1.54,7.2};
	        goster(&komedifilmi1);
	        struct filmler komedifilmi2={"Eyvah Eyvah 3","Hakan Algul","Serra Yilmaz,Ozge Borak,Demet Akbag",1.45,5.9};
	        goster(&komedifilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	printf("\nOrganize Isler filminin seanslari:\n2D  10.00/12.00/13.00/15.00/20.00/21.00");
				printf("\nSectiginiz seanstaki saati girin:");
				scanf("%f",&seans);			
				}
				else{
	        	printf("\nEyvah Eyvah 3 filminin seanslari:\n 2D  12.30/14.20/16.00/18.15/20.40");
				printf("\nSectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
		}      
  }
  		if(tursecimi==4){
			printf("\n-----Vizyondaki Aksiyon Filmleri-----");
			struct filmler aksiyonfilmi1={"Kaptan Amerika","Joe Russo","William Hurt,Tom Holland,Chris Evans",2.28,8.3};
	        goster(&aksiyonfilmi1);
	        struct filmler aksiyonfilmi2={"Lucy"," Luc Besson","Scarlett Johansson, Morgan Freeman, Choi Min-sik",1.30,7.7};
	        goster(&aksiyonfilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	int i,j;
	        	printf("\nKaptan Amerika filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  11.00/14.00  ");
	        			if(i==1 && j==18)
	        			printf("15.00/22.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  16.00/20.00  ");
	        			if(i==2 && j==18)
	        			printf("12.00/18.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);	
				}
				else{
	        	int i,j;
	        	printf("\nLucy filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  09.00/00.00  ");
	        			if(i==1 && j==18)
	        			printf("10.00/23.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  13.00/17.00  ");
	        			if(i==2 && j==18)
	        			printf("11.00/19.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
		} 
	}
	  		if(tursecimi==5){
			printf("\n-----Vizyondaki Bilimkurgu Filmleri-----");
			struct filmler bilimfilmi1={"Labirent:Son Isyan","Wes Ball","Dylan O'Brien,Kaya Scodelario",2.22,7.0};
	        goster(&bilimfilmi1);
	        struct filmler bilimfilmi2={"Insurgent","Robert Schwentke","Shailene Woodley,Theo James",1.59,6.2};
	        goster(&bilimfilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	int i,j;
	        	printf("\nLabirent:Son Isyan filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  11.00/14.00  ");
	        			if(i==1 && j==18)
	        			printf("15.00/22.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  16.00/20.00  ");
	        			if(i==2 && j==18)
	        			printf("12.00/18.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);		
				}
				else{
	        	int i,j;
	        	printf("\nInsurgent filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  09.00/00.00  ");
	        			if(i==1 && j==18)
	        			printf("10.00/23.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  13.00/17.00  ");
	        			if(i==2 && j==18)
	        			printf("11.00/19.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
		}
	}
   	
	break;
	case 3:
	    printf("\nAkasya AVM ZK Sinemasina hos geldiniz:\n");
		printf("Film turleri:\n1-korku\n2-dram\n3-komedi\n4-aksiyon\n5-bilimkurgu\n");
		printf("Kacinci film turunu izlemek istiyorsunuz:");
		scanf("%d",&tursecimi);
		if(tursecimi==1){
			printf("\n-----Vizyondaki Korku Filmleri-----");
			struct filmler korkufilmi1={"Bird Box","Susanne Bier","Machine Gun Kelly,Rosa Salazar,Lil Rel Howery",2.04,6.6};
	        goster(&korkufilmi1);
	        struct filmler korkufilmi2={"Dracula Untold","Gary Shore","Luke Evans,Sarah Gadon,Dominic Cooper",1.32,6.3};
	        goster(&korkufilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	int i,j;
	        	printf("\nBird Box filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  11.00/14.00  ");
	        			if(i==1 && j==18)
	        			printf("15.00/22.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  16.00/20.00  ");
	        			if(i==2 && j==18)
	        			printf("12.00/18.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
				}
				else{
	        	int i,j;
	        	printf("\nDracula Untold filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  09.00/00.00  ");
	        			if(i==1 && j==18)
	        			printf("10.00/23.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  13.00/17.00  ");
	        			if(i==2 && j==18)
	        			printf("11.00/19.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
				}
		}
	if(tursecimi==2){
			printf("\n-----Vizyondaki Dram Filmleri-----");
			struct filmler dramfilmi1={"Nomadland","Chloe Zhao","Frances McDormand,David Strathairn,Linda May",1.48,8.1};
	        goster(&dramfilmi1);
	        struct filmler dramfilmi2={"7.Kogustaki Mucize","Mehmet Oztekin","Aras Bulut,Nisa Aksongur,Deniz Baysal",2.12,8.7};
	        goster(&dramfilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	int i,j;
	        	printf("\nNomadland Mucize filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=1;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("2D  11.00/14.00  ");
	        			if(i==1 && j==18)
	        			printf("15.00/22.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("\nSectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
				}
				else{
	        	printf("\n7. Kogustaki Mucize filminin seanslari:\n\n2D  11.30/15.30/20.30/22.00");
				printf("\nSectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
		}
	}
	if(tursecimi==3){
			printf("\n-----Vizyondaki Komedi Filmleri-----");
			struct filmler komedifilmi1={"Vizontele","Yilmaz Erdogan","Yilmaz Erdogan,Demet Akbag,Altan Erkekli",1.50,8.0};
	        goster(&komedifilmi1);
	        struct filmler komedifilmi2={"Neseli Hayat","Yilmaz Erdogan","Ersin Korkut,Erdal Tosun,Busra Pekin",1.40,6.1};
	        goster(&komedifilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	printf("\nVizontele filminin seanslari:\n2D  10.00/12.00/13.00/15.00/20.00/21.00");
				printf("\nSectiginiz seanstaki saati girin:");
				scanf("%f",&seans);		
				}
				else{
	        	printf("\nNeseli Hayat filminin seanslari:\n 2D  12.30/14.20/16.00/18.15/20.40");
				printf("\nSectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
		}
	}
  		if(tursecimi==4){
			printf("\n-----Vizyondaki Aksiyon Filmleri-----");
			struct filmler aksiyonfilmi1={"Canavar Avcisi","Paul W. S. Anderson","Milla Jovovich,Tony Jaa,Ron Perlman",1.44,6.0};
	        goster(&aksiyonfilmi1);
	        struct filmler aksiyonfilmi2={"Extraction","Sam Hargrave","Chris Hemsworth,Sam Hargrave,Randeep Hooda",1.56,6.7};
	        goster(&aksiyonfilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	int i,j;
	        	printf("\nCanavar Avcisi filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  11.00/14.00  ");
	        			if(i==1 && j==18)
	        			printf("15.00/22.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  16.00/20.00  ");
	        			if(i==2 && j==18)
	        			printf("12.00/18.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);		
				}
				else{
	        	int i,j;
	        	printf("\nExtraction filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  09.00/00.00  ");
	        			if(i==1 && j==18)
	        			printf("10.00/23.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  13.00/17.00  ");
	        			if(i==2 && j==18)
	        			printf("11.00/19.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);
		}  
	}
	  		if(tursecimi==5){
			printf("\n-----Vizyondaki Bilimkurgu Filmleri-----");
			struct filmler bilimfilmi1={"Kacak Yolcu","Joe Penna","Anna Kendrick,Daniel Dae Kim,Shamier Anderson",1.56,5.1};
	        goster(&bilimfilmi1);
	        struct filmler bilimfilmi2={"Space Sweepers","Jo Sung-hee","Song Joong-ki,Kim Tae-ri,Anupam Tripathi",2.16,6.6};
	        goster(&bilimfilmi2);
	      
	        printf("\nKacinci filmi izlemek istiyorsunuz:");
	        scanf("%d",&filmsecimi);
	        if(filmsecimi==1){
	        	int i,j;
	        	printf("\nKacak Yolcu filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  11.00/14.00  ");
	        			if(i==1 && j==18)
	        			printf("15.00/22.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  16.00/20.00  ");
	        			if(i==2 && j==18)
	        			printf("12.00/18.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);		
				}
				else{
	        	int i,j;
	        	printf("\nSpace Sweepers filminin seanslari:\n\2   ALTYAZILI \t DUBLAJLI\n\n");
	        	for(i=1;i<=2;i++){
	        		for(j=1;j<=18;j++){
	        			if(i*j==1)
	        			printf("3D  09.00/00.00  ");
	        			if(i==1 && j==18)
	        			printf("10.00/23.00  ");
	        			if(i==2 && j==1)
	        			printf("\n2D  13.00/17.00  ");
	        			if(i==2 && j==18)
	        			printf("11.00/19.00  ");
	        			else
	        			continue;
					}
	        		printf("\n");
				}
				printf("Sectiginiz seanstaki saati girin:");
				scanf("%f",&seans);	
		}      
	}
	break;
	default: 
	printf("lutfen gecerli bir mekan numarasi giriniz.");			
	break;
}
	        printf("\nKac adet bilet almak istiyorsunuz: (Not:En fazla 3 tane bilet alabilirsiniz):");
			scanf("%d",&biletsayisi);
			while(biletsayisi>3){
				printf("En fazla 3 tane bilet alabilirsiniz.");
				printf("\nKac adet bilet almak istiyorsunuz:");
				scanf("%d",&biletsayisi);
			}
				koltuknoalma(biletsayisi);
	            printf("\n\nOdemeniz gereken tutar %dTL dir.",biletodeme(biletsayisi,cevap));
	            printf("\nOdemeyi yaptiniz mi? (1-EVET/2-HAYIR): ");
	            scanf("%d",&cevap2);

				while(cevap2==2){
				printf("Odeme basarisiz. Lutfen tekrar deneyiniz.");
				printf("\nOdemeyi yaptiniz mi? (1-EVET/2-HAYIR): ");
				scanf("%d",&cevap2);
				}
				if(cevap2==1){
	            	printf("Odemeniz basariyla gerceklesmistir. Iyi seyirler dileriz :)");
				}		
				
	system("pause");			
	return 0;
}


