#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <time.h>

typedef struct liste{
	int sira;
	struct liste *next;
	
}musteriler;


musteriler *ilk=NULL,*son=NULL,*siralilk=NULL,*siralison=NULL;


int rastgele_uret(){
	int rastgele;
	rastgele = rand()%3+1;
	return rastgele;
}

int ekle(){
	int x = rastgele_uret();
	if(ilk == NULL){
		musteriler *new = (musteriler *)malloc(sizeof(musteriler));
		new -> sira = x;
		new -> next = NULL;
		ilk = new;
		son = new;
	}
	else{
	    musteriler *new=(musteriler*)malloc(sizeof(musteriler));
    	new ->sira=x;
    	new ->next=NULL;
    	son->next=new;
    	son=new;
	}
}

int ekleiki(int x){
	
	if(siralilk==NULL){
		musteriler *yeni = (musteriler *)malloc(sizeof(musteriler));
		yeni->sira = x;
		yeni->next = NULL;
		siralilk = yeni;
		siralison = yeni;
	}
	else{
	    musteriler *yeni = (musteriler*)malloc(sizeof(musteriler));
    	yeni -> sira = x;
    	yeni -> next = NULL;
    	siralison -> next = yeni;
    	siralison = yeni;
	}
}

void goster(musteriler *bliste){
	if(bliste == NULL){
		printf("liste boş");
		
	}
	musteriler *gecici = bliste;
	while(gecici!= NULL){
		printf("%d\t", gecici -> sira);
		gecici = gecici -> next;
	}
	
}



void sirala(){
    musteriler *gecici = ilk;
    
    while(gecici != NULL){

        if(gecici -> sira == 3){
            ekleiki(3);
            
        }
        
        gecici = gecici-> next;
        
    }
    printf("\nsırala 1 calıstı");
    
}

int siralaiki() {
    musteriler *gecici = ilk;
    printf("\nsırala 2 calıstı");
    int i = 0;
    while(gecici != NULL){
        
        if(gecici -> sira == 1){
            ekleiki(1);
            
            
        }
        else if((gecici -> sira == 2) && (i < 2)){
            
            ekleiki(2);
            
            i++;
            
        }
        else if((gecici -> sira == 2) && (i == 2)){
            
            while(gecici != NULL){
                if(gecici -> sira == 1){
                    ekleiki(1);
                    
                }
                gecici=gecici->next;
            }
            ekleiki(2);
            
            i=0;
            
        }
        
        gecici=gecici->next;
    }
    
    printf("\nsırala 2 bitti");
}


int main(){
	srand(time(NULL));
	int i,dizi[10];
	
	for(i=0;i<10;i++){
		ekle();
	}
	
	printf("ilk durum:");
	goster(ilk);
	
    sirala();
    printf("\nmaindeyiz\n\n");
    printf("ikinci durum:");
    goster(siralilk);
    
    printf("\nilk durum:");
    goster(ilk);
    
    printf("\nmaindeyiz");
    
    siralaiki();
    
    printf("\nmaindeyiz\n\n");
    printf("son durum:");
    goster(siralilk);
    
    
	return 0;
}