#include <stdio.h>
#include <stdlib.h>

int splitData(int arr[],int size,int split_size,int **arr1,int **arr2){
    if(split_size>size||split_size<0){
        return -1;
    }
    *arr1=calloc(split_size,sizeof(int));
    *arr2=calloc((size-split_size),sizeof(int));
    for(int i=0;i<split_size;i++){
        *(*arr1+i)=*(arr+i);
    }
    for(int i=split_size;i<size;i++){
        *(*arr2+i)=*(arr+i);
    }
    return 0;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},size=10;
    int split_size=4;
    int *arr1=NULL,*arr2=NULL;
    if(splitData(arr,size,split_size,&arr1,&arr2)!=-1){
        printf("pirmas masyvas\n");
        for(int i=0;i<split_size;i++){
            printf("%d\n",*(arr1+i));
        }
        printf("antras masyvas\n");
        for(int i=split_size;i<size;i++){
          printf("%d\n",*(arr2+i));
        }
        free(arr1);
        free(arr2);
    }
    else{
        printf("nekorektiski duomenys\n");
    }
    return 0;
}
