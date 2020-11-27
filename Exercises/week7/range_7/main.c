#include <stdio.h>
#include <stdlib.h>
void generateArray(int data[], int size, int low, int high){
    for(int i=0;i<size;i++){
        int temp=rand()%(high-low+1)+low;
        data[i]=temp;
    }
}
int main()
{
    int size,low,high;
    printf("iveskite kokio dydzio masyvo noretumete, ir itervalo [a,b] rezius\n");
    scanf("%d%d%d",&size,&low,&high);
    int *arr=calloc(size,sizeof(int));
    generateArray(arr,size,low,high);
    for(int i=0;i<size;i++){
            printf("arr[%d]=%d\n",i,*(arr+i));
    }
    return 0;
}
