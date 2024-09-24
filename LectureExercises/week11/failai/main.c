#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "file.h"

void createArray(int *arr,int size,int low, int high){
    for(int i=0;i<size;i++){
        int temp=rand()%(high-low+1)+low;
       arr[i]=temp;
    }
}
int printArray(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main()
{
    int size=10;
    srand(time(NULL));
    int *m1=malloc(size*sizeof(int)),*m2=malloc(size*sizeof(int)),*m3=malloc(size*sizeof(int));
    createArray(m1,size,0,20);
    createArray(m2,size,0,20);
    createArray(m3,size,0,20);
    printArray(m1,size);
    printArray(m2,size);
    printArray(m3,size);
    savetofile("save.txt",m1,size);
    savetofile("save.txt",m3,size);
    loadfromfile("save.txt",m1);
    savetofile("save2.txt",m2,size);
    loadfromfile("save2.txt",m3);
    loadfromfile("save.txt",m2);
    printf((save==3&&load==3)?"ALL GOOD":"SOMETHING'S WRONG\n");
//    int good=1;
//    for(int i=0;i<size;i++){
//        if(m1[i]!=m2[i]){
//            good=0;
//            break;
//        }
//    }
//    if(good){
//        printf("ALL GOOD\n");
//    }
//    else{
//        printf("SOMETHING'S WRONG\n");
//    }
    return 0;
}
