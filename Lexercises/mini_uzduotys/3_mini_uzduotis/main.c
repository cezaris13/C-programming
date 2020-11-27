#include <stdio.h>
#include <stdlib.h>
void generateArray(int data[], int size){
    for(int i=0;i<size;i++){
        data[i]=5;
    }
}
int main(){
    int size;
    printf("iveskite kokio dydzio masyvo noretumete\n");
    scanf("%d",&size);
    int *arr=calloc(size,sizeof(int));
    generateArray(arr,size);
    for(int i=0;i<size;i++){
            printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}
