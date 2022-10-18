#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

 
 struct ilac{
   char ad[15];
   char yayin[10];
   char stt[11];
   char icerik[500];
   int id;
   int fiyat;
   int miktar;
  }ilaclar[20];
  
  struct recete{
  	char tc[11];
  	int ilacid;
  	int miktar;
  }receteler[20];

 void ilackaydet(int number,struct ilac ilaclar[]);
 void ilacsil(int number);
 void ilaclisteleme(int number);
 void ilacara(int number);
 void stokbilgisi(int number);
 void recetekayit(int number2,struct recete receteler[]);
 void receteara(int number2);
 int main()
 {
   int i,secim,number=0,devam,number2=0;
/*   for(i=0;i<20;i++)
   {
   ilaclar[i].id=0;
   ilaclar[i].fiyat=0;
   ilaclar[i].miktar=0;
   strcpy(ilaclar[i].stt,"");
   strcpy(ilaclar[i].ad,"");
   strcpy(ilaclar[i].yayin,"");
   } */
   ilaclar[0].id=1;
   ilaclar[0].miktar=120;
   ilaclar[0].fiyat=30;
   strcpy(ilaclar[0].stt,"23-04-2016");
   strcpy(ilaclar[0].ad,"Paracetmol");
   strcpy(ilaclar[0].yayin,"ABCD");
   
    int girilensifre;
	printf("sifrenizi giriniz\n");
	scanf("%d",&girilensifre);
	while(girilensifre!=0){
		printf("Sifre yanlis. Lutfen tekrar deneyin.");
        printf("\nsifrenizi giriniz:");
	    scanf("%d",&girilensifre);
	}	
		if(girilensifre==0){
		printf("giris basarili\n");
			printf("*****IREM ECZANESI YONETIM SISTEMI*****\n");
   
   do{
   printf("************MENU****************\n");
   printf("1-ilac ekle\n");
   printf("2-ilac sil\n");
   printf("3-ilac arama\n");
   printf("4-ilac listeleme\n");
   printf("5-stok bilgisi\n");
   printf("6-recete kayit \n");
   printf("7-recete arama\n");
   
   printf("yapicaginiz islemi seciniz:");
   scanf("%d",&secim);
   switch(secim)
   {
    
      case 1:
      {
       printf("*****ilac ekleme******\n");
       ++number;
       ilackaydet(number,ilaclar);
       break;
      }
      case 2:
      {
       printf("******ilac silme******\n");
       ilacsil(number+1);
       break;
      }
      case 3:
      {
       printf("*****ilac arama*****\n");
       ilacara(number+1);
       break;
      }
      case 4:
      {
       printf("*********depo ********\n");
       ilaclisteleme(number+1);
       break;
      }
      case 5:
      	{
      	printf("*****stok bilgisi******\n");
		stokbilgisi(number+1);	
		}
	  case 6:
	   	{
	   	printf("*******recete kayit*****\n");
	   	++number2;
	   	recetekayit(number2,receteler);
	   	break;
		   }
      case 7:{
      	printf("*******recete arama*******\n");
      	receteara(number2+1);
		break;
	  }
   }
     printf("devam etmek icin 1 e basiniz:");
     scanf("%d",&devam);
   }while(devam==1);
}
   return 0;
 }
 
  void ilacara(int number){
  	
  int i,flag=0;
  char name[20];
  printf("aramak istediginiz ilac adi:");
  fflush(stdin);
  gets(name);
  for(i=0;i<number;i++)
  {
   if(strcmp(ilaclar[i].ad,name)==0)
   {
    flag=1;
    printf("ad=%s\n fiyat=%d\n miktar=%d\n yayin=%s\n stt=%s\n",ilaclar[i].ad,ilaclar[i].fiyat,ilaclar[i].miktar,ilaclar[i].yayin,ilaclar[i].stt);
   }
  }
  if(flag==0)
  {
   printf("aradiginiz ilac bulunamadi\n");
  }
 }
 
  void ilaclisteleme(int number){
  	
  int i;
  if(number!=0)
  {
   for(i=0;i<number;i++)
   {
    if(ilaclar[i].id!=0)
    printf("Id=%d\n ad=%s\n fiyat=%d\n miktar=%d\n yayin=%s\n stt=%s\n",ilaclar[i].id,ilaclar[i].ad,ilaclar[i].fiyat,ilaclar[i].miktar,ilaclar[i].yayin,ilaclar[i].stt);
   }  
  }
  else
   printf("ilac bulunamadi");
 }
 
 void ilackaydet(int number,struct ilac ilaclar[]){
 
  char girilenad[100];
  printf("id:");
  scanf("%d",&(ilaclar[number].id));
  printf("ad:\n");
  fflush(stdin);
  gets(girilenad);
  strcpy(ilaclar[number].ad,girilenad);
  printf("yayin:\n");
  fflush(stdin);
  gets(ilaclar[number].yayin);
  printf("stt:\n");
  gets(ilaclar[number].stt);
  printf("miktar: \n");
  scanf("%d",&(ilaclar[number].miktar));
  printf("fiyat: \n");
  scanf("%d",&(ilaclar[number].fiyat));
  printf("%d id li ilac sisteme kaydi gerceklestirildi\n",ilaclar[number].id);

 }
 
 void ilacsil(int number){
 	
  int girilenid,i,flag=0,num;
  printf("silmek istediginiz ilacin idsini giriniz\n");
  scanf("%d",&girilenid);
  for(i=0;i<number;i++)
  {
   if(ilaclar[i].id==girilenid)
   {
    flag=1;
    ilaclar[i].id=0;
    ilaclar[i].fiyat=0;
    ilaclar[i].miktar=0;
    strcpy(ilaclar[i].ad,"");
    strcpy(ilaclar[i].yayin,"");
    strcpy(ilaclar[i].stt,"");
    strcpy(ilaclar[i].icerik,"");
    num=i;
    break;
   }
  }
  if(flag==1)
  {
   printf("%d idli ilac silindi\n",girilenid);
  }
 }
 
 void stokbilgisi(int number){
 	
  int i;
  if(number!=0)
  {
   for(i=0;i<number;i++)
   {
    if(ilaclar[i].id!=0)
    printf(" ad=%s  miktar=%d\n ",ilaclar[i].ad,ilaclar[i].miktar);
   }  
  }
  else
  printf("ilac bulunamadi");
  }
  
 void recetekayit(int number2,struct recete receteler[]){

  printf("tc:\n");
  fflush(stdin);
  gets(receteler[number2].tc);
  printf("ilac id: \n");
  scanf("%d",&(receteler[number2].ilacid));
  printf("ilac miktar: \n");
  scanf("%d",&(receteler[number2].miktar));
  printf("%s tc li hastanin recete eklemesi gerceklestirildi\n",receteler[number2].tc);
 }
 
 void receteara(int number2){
  	
  int i,flag=0;
  char girilentc[11];
  printf("aramak istediginiz hastanin tc:");
  fflush(stdin);
  gets(girilentc);
  for(i=0;i<number2;i++)
  {
   if(strcmp(receteler[i].tc,girilentc)==0)
   {
    flag=1;
    printf("tc=%s  ilacid=%d  miktar=%d\n",receteler[i].tc,receteler[i].ilacid,receteler[i].miktar);
   }
  }
  if(flag==0)
  {
   printf("aradiginiz hastaya ait recete bulunamadi\n");
  }
 }
