#ifndef filec
#define filec
#include <stdlib.h>
#include <stdio.h>
int save=0;
int load=0;
void savetofile(char *name,int arr[],int size){
    save++;
    FILE *write=fopen(name,"wb");
    fprintf(write,"%d ",size);
    for(int i=0;i<size;i++){
        fprintf(write,"%d ",arr[i]);
    }
    fclose(write);
}

void loadfromfile(char *name,int arr[]){
    load++;
    FILE *read=fopen(name,"rb");
    int size;
    fscanf(read,"%d ",&size);
    for(int i=0;i<size;i++){
        fscanf(read,"%d ",&arr[i]);
    }
    fclose(read);
}


#endif // filec

