#include <stdio.h>
#define MAX 50
void bubblesort(int array[],int size){
    int i,j;
    for (i=0;i<size;i++){
        for(j=1;j<size-i;j++){
            if(array[j-1]>array[j]){
                int temp=array[j];
                array[j]=array[j-1];
                array[j-1]=temp;
            }
        }
    }
}

int main()
{
    int array[MAX],size,i;
    
    printf("kac elemanli:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    bubblesort(array,size);
        
         for(i=0;i<size;i++){
        printf("%d-",array[i]);
    }
    return 0;
}
