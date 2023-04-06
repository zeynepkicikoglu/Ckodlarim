#include <stdio.h>
#define MAX 50
void selectionsort(int arr[],int size){
    int i,j;
    int minimumindex;
    for(i=0;i<size;i++){
        minimumindex=i;
        for(j=i+1;j<size;j++){
            if(arr[j]<arr[minimumindex]{
            	minimumindex=j;
			}
        }
    }
    int temp=arr[i];
    arr[i]=arr[minimumindex];
    arr[minimumindex]=temp;
}

int main(){
    int array[MAX],size,i;
    printf("kac elemanli:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);     
    }
    selectionsort(array,size);
    for(i=0;i<size;i++){
        printf("%d  ",array[i]);
    }
    return 0;
}



#include<stdlib.h>
#include<string.h>
#include<stdio.h>
typedef struct Student{
    int numara;
    char isim[100];
    char soyisim[100];
    struct Student *sonraki;
}dugum;

void goster(dugum *r){
    while(r != NULL){
        printf("%d %s %s",r->numara, r->isim, r->soyisim);
        r = r->sonraki;
    }
    printf("\n");
}
void arama(dugum *r, int x){
    while(r != NULL){
        if(r->numara == x){
            printf("%d %s %s\n",r->numara,r->isim,r->soyisim);
            break;
        }
        r = r->sonraki;
    }
    //printf("böyle öğrenci yok");
    
}
void ekle(dugum *r,int x,char isim,char soyisim){
    while(r->sonraki != NULL){
        r=r->sonraki;
    }
    r->sonraki=(dugum *)malloc(sizeof(dugum));
    r->sonraki -> numara = x;
    strcpy(r->sonraki->isim, &isim);
    strcpy(r->sonraki->soyisim, &soyisim);
    r->sonraki->sonraki=NULL;
}

dugum *sil(dugum *r,int x){
    dugum *temp;
    if(r->numara == x){
        temp = r;
        r=r->sonraki;
        free(temp);
        return r;
    }
    while(r->sonraki != NULL && r->sonraki->numara != x){
        r = r -> sonraki;
    }
    if(r->sonraki == NULL){
        printf("boyle bir numara yok");
        return r;
    }
    temp = r->sonraki;
    r->sonraki = r->sonraki->sonraki;
    free(temp);
    return r;
    
}

int main(){
    dugum * kok; // dugum isimli structtan kok adında pointer olusturma
    kok = (dugum *)malloc(sizeof(dugum));  // kok pointerını dugum adındakı structtın boyutundan ve bıllgılerınden alması
    kok -> numara = 123456;
    strcpy(kok->isim, "ayse");
    strcpy(kok->soyisim, "gul");
    kok -> sonraki = (dugum *)malloc(sizeof(dugum));
    kok -> sonraki -> numara =123457;
    strcpy(kok-> sonraki->isim, "serpil");
    strcpy(kok-> sonraki->soyisim, "ustebay");
    kok ->sonraki->sonraki=(dugum *)malloc(sizeof(dugum));
    kok ->sonraki->sonraki=NULL;
    
    int secim,no;
    char ad,soyad;
    printf("-------İŞLEMLER-------");
    printf("\n1-Öğrenci Ekleme\n2-Öğrenci Arama\n3-Öğrenci Silme\n4-Listeyi Yazdırma\n5-Çıkış\nİşlem seçin:");
    scanf("%d",&secim);
    
    while(secim != 5){
        switch (secim){
            case 1:
                printf("\nÖğrencinin adı:");
                scanf("%c", &ad);
                
                printf("\nÖğrencinin soyadı:");
                scanf("%c", &soyad);
                
                printf("\nÖğrencinin numarası:");
                scanf("%d", &no);
                ekle(kok,no,ad,soyad);
                break;
            case 2:
                printf("\nAranacak öğrenci numarası:");
                scanf("%d", &no);
                arama(kok,no);
                break;
            case 3:
                printf("\nSilinecek öğrenci numarası:");
                scanf("%d", &no);
                sil(kok,no);
                break;
            case 4:
                goster(kok);
                break;
            default:
                printf("Yanlış seçim numarası girdiniz.");
                
        }   
    }
}
    



#include<stdlib.h>
#include<string.h>
#include<stdio.h>


struct Student{
    int rollnumber;
    char name[100];
    char phone[100];
    float percentage;
    struct Student *next;
    
}* head;


void insert(int rollnumber, char* name, char* phone, float percentage)
{
    
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    student->rollnumber = rollnumber;
    strcpy(student->name, name);
    strcpy(student->phone, phone);
    student->percentage = percentage;
    student->next = NULL;
    
    if(head==NULL){
        // if head is NULL
        // set student as the new head
        head = student;
    }
    else{
        // if list is not empty
        // insert student in beginning of head
        student->next = head;
        head = student;
    }
    
}
void search(int rollnumber)
{
    struct Student * temp = head;
    while(temp!=NULL){
        if(temp->rollnumber==rollnumber){
            printf("Roll Number: %d\n", temp->rollnumber);
            printf("Name: %s\n", temp->name);
            printf("Phone: %s\n", temp->phone);
            printf("Percentage: %0.4f\n", temp->percentage);
            return;
        }
        temp = temp->next;
    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);
}
void update(int rollnumber)
{
    
    struct Student * temp = head;
    while(temp!=NULL){
        
        if(temp->rollnumber==rollnumber){
            printf("Record with roll number %d Found !!!\n", rollnumber);
            printf("Enter new name: ");
            scanf("%s", temp->name);
            printf("Enter new phone number: ");
            scanf("%s", temp->phone);
            printf("Enter new percentage: ");
            scanf("%f",&temp->percentage);
            printf("Updation Successful!!!\n");
            return;
        }
        temp = temp->next;
        
    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);
    
}
void Delete(int rollnumber)
{
    struct Student * temp1 = head;
    struct Student * temp2 = head; 
    while(temp1!=NULL){
        
        if(temp1->rollnumber==rollnumber){
            
            printf("Record with roll number %d Found !!!\n", rollnumber);
            
            if(temp1==temp2){
                // this condition will run if
                // the record that we need to delete is the first node
                // of the linked list
                head = head->next;
                free(temp1);
            }
            else{
                // temp1 is the node we need to delete
                // temp2 is the node previous to temp1
                temp2->next = temp1->next;
                free(temp1); 
            }
            
            printf("Record Successfully Deleted !!!\n");
            return;
            
        }
        temp2 = temp1;
        temp1 = temp1->next;
        
    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);
    
}
void display()
{   
    
    struct Student * temp = head;
    if(temp == NULL){
        printf("LİSTE BOŞ\n");
    }
    while(temp!=NULL){
        
        printf("Roll Number: %d\n", temp->rollnumber);
        printf("Name: %s\n", temp->name);
        printf("Phone: %s\n", temp->phone);
        printf("Percentage: %0.4f\n\n", temp->percentage);
        temp = temp->next;
        
    }
}
int main()
{
    head = NULL;
    int choice;
    char name[100];
    char phone[100];
    int rollnumber;
    float percentage;
    
    insert(123456,"ayse","536",90);
    insert(123457,"serpil","836",50);
    
    do
    {
        printf("1 to insert student details\n2 to search for student details\n3 to delete student details\n4 to update student details\n5 to display all student details");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter roll number: ");
                scanf("%d", &rollnumber);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter phone number: ");
                scanf("%s", phone);
                printf("Enter percentage: ");
                scanf("%f", &percentage);
                insert(rollnumber, name, phone, percentage);
                break;
            case 2:
                printf("Enter roll number to search: ");
                scanf("%d", &rollnumber);
                search(rollnumber);
                break;
            case 3:
                printf("Enter roll number to delete: ");
                scanf("%d", &rollnumber);
                Delete(rollnumber);
                break;
            case 4:
                printf("Enter roll number to update: ");
                scanf("%d", &rollnumber);
                update(rollnumber);
                break;
            case 5:
                display();
                break;
        }
        
    } while (choice != 0);
}