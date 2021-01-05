 #ifndef filec
#define filec
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int comp=0;
int pris=0;
void copy(int *arr,int *arr2,int size){
    for(int i=0;i<size;i++){
        *(arr+i)=*(arr2+i);
    }
}
int swap(int *a,int *b){
    pris+=3;
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
void printArray(int data[],int size){
    for(int i=0;i<size;i++){
        printf("data[%d]=%d\n",i,data[i]);
    }
}
void generateArray(int data[], int size, int low, int high){
    for(int i=0;i<size;i++){
        int temp=rand()%(high-low+1)+low;
        data[i]=temp;
    }
    printArray(data,size);
}
int isSorted(int data[],int size){
    for(int i=0;i<size-1;i++){
        if(data[i]>data[i+1]){
            return 0;
        }
    }
    return 1;
}
void bubbleSort(int data[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            comp++;
            if(data[i]>data[j]){
                swap(data+i,data+j);
                pris++;
            }
        }
    }
}
int partition (int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);  
    pris+=2;
    for (int j = low; j <= high- 1; j++){
        comp++;
        if (arr[j] < pivot){
            pris++;
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high,int size){
    comp++;
    if (low < high){
        pris++;
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1,size);
        quickSort(arr, pi + 1, high,size);
    }
}

void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++) {
        pris+=2;
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            comp+=2;
            pris+=2;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        pris++;
    }
}

void selectionSort(int arr[], int n){
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        pris++;
        min_idx = i;
        for (j = i+1; j < n; j++)
          comp++;
          if (arr[j] < arr[min_idx])
            pris++;
            min_idx = j;
            swap(&arr[min_idx], &arr[i]);
    }
}

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    pris+=2;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        pris++;
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        pris++;
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l; 
    pris+=3;
    while (i < n1 && j < n2) {
        comp+=2;
        if (L[i] <= R[j]) {
            comp++;
            pris+=2;
            arr[k] = L[i];
            i++;
        }
        else{
            comp++;
            arr[k] = R[j];
            pris+=2;
            j++;
        }
        k++;
        pris++;
    }
    while (i < n1) {
            comp++;
        pris+=3;
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
            comp++;
        pris+=3;
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r){
    comp++;
    if (l < r) {
        int m = l + (r - l) / 2;
        pris++;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int max=40;
int showMenu(char *menuTitle, char *menuOptions[], int menuSize, int *vals){
    char *values[2]={"Yes    ","No     "};
    int num,size=strlen(menuTitle);
    char buffer[max+6];
    memset(buffer, '=', max+6);   
    buffer[max+6] = 0;
    printf(" %s\n",buffer);
    printf("|%s%*s|%s|\n",menuTitle,max-strlen(menuTitle)-2,"","Sorted?");
    printf(" %s\n",buffer);
    for(int i=0;i<menuSize;i++){
        printf("|%d.%s%*s|%s|\n",i+1,menuOptions[i],max-strlen(menuOptions[i])-4,"",(vals[i]==1?values[0]:values[1]));
    }
    printf(" %s\n",buffer);
    return num;
}
void printReport(char *alg, clock_t t){
    int maxi=9;
    printf("%s sort time:%*s%fsek.\n",alg,maxi-strlen(alg),"",((double)t)/CLOCKS_PER_SEC);
    printf("comparisons:%d\npriskyrimai=%d\n",comp,pris);
    comp=0;
    pris=0;
}
#endif // filec
