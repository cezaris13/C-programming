#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generateArray(int data[], int size, int low, int high){
    for(int i=0;i<size;i++){
        int temp=rand()%(high-low+1)+low;
        data[i]=temp;
    }
}
int *createArray(int size,int low, int high){
    int *arr=calloc(size,sizeof(int));
    generateArray(arr,size,low,high);
    return arr;
}
int main()
{
   srand(time(NULL));
   int size,low,high;
   printf("iveskite masyvo dydi, ir intervala [a,b] kurio reiksmemis bus uzpildytas masyvas\n");
   scanf("%d%d%d",&size,&low,&high);
   int *arr=createArray(size,low,high);
   for(int i=0;i<size;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}
