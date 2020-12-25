#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "sorts.h"

int main(){
    int size=100;
    char *options[5]={"bubble","quick","insert","select","merge"};
    clock_t t;
    char *Title="rikiavimai";
    int menu_size=5;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    for(int k=0;k<10;k++){
        srand(time(NULL));
        int *vals=malloc(5*sizeof(int));
        int *data=malloc(size*sizeof(int)),*savedData=malloc(size*sizeof(int));
        generateArray(savedData,size,0,100);
        copy(data,savedData,size);
        t = clock();
        bubbleSort(data,size);
        t = clock() - t;
        printReport(options[0],t);
        vals[0]=(isSorted(data,size)?1:0);
        copy(data,savedData,size);
        t = clock();
        quickSort(data,0,size,size);
        t = clock() - t;
        printReport(options[1],t);
        vals[1]=(isSorted(data,size)?1:0);
        copy(data,savedData,size);
        t = clock();
        insertionSort(data,size);
        t = clock() - t;
        printReport(options[2],t);
        vals[2]=(isSorted(data,size)?1:0);
        copy(data,savedData,size);
        t = clock();
        selectionSort(data,size);
        t = clock() - t;
        printReport(options[3],t);
        vals[3]=(isSorted(data,size)?1:0);
        copy(data,savedData,size);
        t = clock();
        mergeSort(data,0,size);
        t = clock() - t;
        printReport(options[4],t);
        vals[4]=(isSorted(data,size)?1:0);
        max=(max<strlen(Title)?strlen(Title):max);
        for(int i=0;i<menu_size;i++){
              max=(max<strlen(options[i])?strlen(options[i]):max);
        }
        showMenu(Title,options,menu_size,vals);
    }
    return 0;
}
