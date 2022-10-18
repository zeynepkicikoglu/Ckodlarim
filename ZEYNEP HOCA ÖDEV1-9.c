#include <stdio.h>

int main() {
	
	int yil,gun,hafta,s,haf;
	int a=1;
	
	printf("1994 ve 1999 yillari arasindan bir yil girin: ");
	scanf("%d" ,&yil);
	switch(yil) {
		
		case 1995:
			printf("\n---------------------OCAK--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%45d \n",a);
			for(gun=2; gun<=31; gun++){
				printf("%3d    ",gun);
			if(gun==8 || gun==15 || gun==22 || gun==29)
			printf("\n");
			}
			
			printf("\n---------------------SUBAT--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%17d%7d%7d%7d%7d\n",1,2,3,4,5);
			for(gun=6; gun<=28 ;gun++){
                printf("%3d    ",gun);
            if(gun==5 || gun==12 || gun==19 || gun==26)
                printf("\n");
                }
                
			printf("\n---------------------MART--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%17d%7d%7d%7d%7d\n",1,2,3,4,5);
			for(gun=6; gun<=31 ;gun++){
                printf("%3d    ",gun);
            if(gun==5 || gun==12 || gun==19 || gun==26)
                printf("\n");
				}
				
			printf("\n---------------------NISAN--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%38d%7d \n",a,2);
			for(gun=3; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun==9 || gun==16 || gun==23)
                printf("\n");
				}
				
			printf("\n---------------------MAYIS--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			
			for(gun=1; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun%7==0)
                printf("\n");
				}
				
			printf("\n---------------------HAZIRAN--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%24d%7d%7d%7d\n",1,2,3,4);
			for(gun=5; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun==11 || gun==18 || gun==25)
                printf("\n");
				}
				
			printf("\n---------------------TEMMUZ--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%38d%7d \n",a,2);
			for(gun=3; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==9 || gun==16|| gun==23 || gun==30)
                printf("\n");
				}
				
			printf("\n---------------------AGUSTOS--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%10d%7d%7d%7d%7d%7d\n",1,2,3,4,5,6);
			for(gun=7; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==13|| gun==20 || gun==27)
                printf("\n");
				}
				
			printf("\n---------------------EYLUL--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%31d%7d%7d\n",1,2,3);
			for(gun=4; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun==10 || gun==17 || gun==24)
                printf("\n");
				}
				
			printf("\n---------------------EKIM--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%45d \n",a);
			for(gun=2; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==8 || gun==15 || gun==22||gun==29)
                printf("\n");
				}
				
			printf("\n---------------------KASIM--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
		    printf("%17d%7d%7d%7d%7d\n",1,2,3,4,5);
			for(gun=6; gun<=30 ;gun++){
                printf("%3d    ",gun);
            if(gun==5 || gun==12 || gun==19 || gun==26)
                printf("\n");
				}
				
			printf("\n---------------------ARALIK--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%31d%7d%7d\n",1,2,3);
			for(gun=4; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==10 || gun==17 || gun==24)
                printf("\n");
				}
				
				break;
		
		case 1996: 
			printf("\n---------------------OCAK--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			for(gun=1; gun<=31 ;gun++){
            printf("%3d    ",gun);
            if(gun%7==0)
			printf("\n");
			}
			
			printf("\n---------------------SUBAT--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
		    printf("%24d%7d%7d%7d\n",1,2,3,4);
			for(gun=5; gun<=29 ;gun++){
                printf("%3d    ",gun);
                if(gun==11 || gun==18 || gun==25)
                printf("\n");
                }
                
			printf("\n---------------------MART--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%31d%7d%7d\n",1,2,3);
			for(gun=4; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==10 || gun==17 || gun==24)
			    printf("\n");
				}
			printf("\n---------------------NISAN--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			for(gun=1; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun%7==0)
                printf("\n");
				}
			printf("\n---------------------MAYIS--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%17d%7d%7d%7d%7d\n",1,2,3,4,5);
			for(gun=6; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==5 || gun==12 || gun==19 || gun==26)
                printf("\n");
				}
			printf("\n---------------------HAZIRAN--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%38d%7d \n",a,2);
			for(gun=3; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun==9 || gun==16|| gun==23 || gun==30)
                printf("\n");
				}
			printf("\n---------------------TEMMUZ--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			
			for(gun=1; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun%7==0)
                printf("\n");
				}
			printf("\n---------------------AGUSTOS--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%24d%7d%7d%7d\n",1,2,3,4);
			for(gun=5; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==11 || gun==18 || gun==25)
                printf("\n");
				}
			printf("\n---------------------EYLUL--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%45d \n",a);
			for(gun=2; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun==8 || gun==15 || gun==22||gun==29)
                printf("\n");
				}
			printf("\n---------------------EKIM--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%10d%7d%7d%7d%7d%7d\n",1,2,3,4,5,6);
			for(gun=7; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==13|| gun==20 || gun==27)
                printf("\n");
				}
			printf("\n---------------------KASIM--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%31d%7d%7d\n",1,2,3);
			for(gun=4; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun==10 || gun==17 || gun==24)
                printf("\n");
				}
			printf("\n---------------------ARALIK--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%45d \n",a);
			for(gun=2; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==8 || gun==15 || gun==22||gun==29)
                printf("\n");
				}
		
		break;
		
		case 1997:
			printf("\n---------------------OCAK--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
		    printf("%17d%7d%7d%7d%7d\n",1,2,3,4,5);
			for(gun=6; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==5 || gun==12 || gun==19 || gun==26)
			printf("\n");
			}
			printf("\n---------------------SUBAT--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%38d%7d \n",a,2);
			for(gun=3; gun<=28 ;gun++){
                printf("%3d    ",gun);
                if(gun==9 || gun==16|| gun==23)
                printf("\n");
                }
			printf("\n---------------------MART--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%38d%7d \n",a,2);
			for(gun=3; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==9 || gun==16|| gun==23 || gun==30)
                printf("\n");
				}
			printf("\n---------------------NISAN--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%10d%7d%7d%7d%7d%7d\n",1,2,3,4,5,6);
			for(gun=7; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun==13|| gun==20 || gun==27)
                printf("\n");
				}
			printf("\n---------------------MAYIS--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%24d%7d%7d%7d\n",1,2,3,4);
			for(gun=5; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==11 || gun==18 || gun==25)
                printf("\n");
				}
			printf("\n---------------------HAZIRAN--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%45d \n",a);
			for(gun=2; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun==8 || gun==15 || gun==22||gun==29)
                printf("\n");
				}
			printf("\n---------------------TEMMUZ--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%10d%7d%7d%7d%7d%7d\n",1,2,3,4,5,6);
			for(gun=7; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==13|| gun==20 || gun==27)
                printf("\n");
				}
			printf("\n---------------------AGUSTOS--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%31d%7d%7d\n",1,2,3);
			for(gun=4; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==10 || gun==17 || gun==24)
                printf("\n");
				}
			printf("\n---------------------EYLUL--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			
			for(gun=1; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun%7==0)
                printf("\n");
				}
			printf("\n---------------------EKIM--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%17d%7d%7d%7d%7d\n",1,2,3,4,5);
			for(gun=6; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==5 || gun==12 || gun==19 || gun==26)
                printf("\n");
				}
			printf("\n---------------------KASIM--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%38d%7d \n",a,2);
			for(gun=3; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun==9 || gun==16|| gun==23)
                printf("\n");
				}
			printf("\n---------------------ARALIK--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			
			for(gun=1; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun%7==0)
                printf("\n");
				}
			
		break;
		
		
		case 1998:
			printf("\n---------------------OCAK--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%24d%7d%7d%7d\n",1,2,3,4);
			for(gun=5; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==11 || gun==18 || gun==25)
			printf("\n");
			}
			printf("\n---------------------SUBAT--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%45d \n",a);
			for(gun=2; gun<=28 ;gun++){
                printf("%3d    ",gun);
                if(gun==8 || gun==15 || gun==22)
                printf("\n");
                }
			printf("\n---------------------MART--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%45d \n",a);
			for(gun=2; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==8 || gun==15 || gun==22||gun==29)
                printf("\n");
				}
			printf("\n---------------------NISAN--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%17d%7d%7d%7d%7d\n",1,2,3,4,5);
			for(gun=6; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun==5 || gun==12 || gun==19 || gun==26)
                printf("\n");
				}
			printf("\n---------------------MAYIS--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%31d%7d%7d\n",1,2,3);
			for(gun=4; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==10 || gun==17 || gun==24)
                printf("\n");
				}
			printf("\n---------------------HAZIRAN--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			
			for(gun=1; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun%7==0)
                printf("\n");
				}
			printf("\n---------------------TEMMUZ--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%17d%7d%7d%7d%7d\n",1,2,3,4,5);
			for(gun=6; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==5 || gun==12 || gun==19 || gun==26)
                printf("\n");
				}
			printf("\n---------------------AGUSTOS--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%38d%7d \n",a,2);
			for(gun=3; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==9 || gun==16|| gun==23 || gun==30)
                printf("\n");
				}
			printf("\n---------------------EYLUL--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%10d%7d%7d%7d%7d%7d\n",1,2,3,4,5,6);
			for(gun=7; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun==13|| gun==20 || gun==27)
                printf("\n");
				}
			printf("\n---------------------EKIM--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%24d%7d%7d%7d\n",1,2,3,4);
			for(gun=5; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==11 || gun==18 || gun==25)
                printf("\n");
				}
			printf("\n---------------------KASIM--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%45d \n",a);
			for(gun=2; gun<=30 ;gun++){
                printf("%3d    ",gun);
                if(gun==8 || gun==15 || gun==22||gun==29)
                printf("\n");
				}
			printf("\n---------------------ARALIK--------------------\n");
			printf("Pzt    Sal    Car    Per    Cum    Cmt    Paz\n");
			printf("%10d%7d%7d%7d%7d%7d\n",1,2,3,4,5,6);
			for(gun=7; gun<=31 ;gun++){
                printf("%3d    ",gun);
                if(gun==13|| gun==20 || gun==27)
                printf("\n");
				}
			
		break;
	        default:
	        	printf("yanlis yil ya da karakter girdiniz.");
	} 
	
	return 0;
}
