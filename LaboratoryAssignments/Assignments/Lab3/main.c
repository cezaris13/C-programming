#include <stdio.h>
#include <stdlib.h>

void nuskaitymas(int **arr, int size, int *min, int *max){//vienas pakeitimas kita savaite ( sita funkcija jau praodyta)
    *arr=malloc(size*sizeof(int*));
    for(int i=0;i<size;i++){
        scanf("%d",((*arr)+i));
        *max=(i==0?*arr[i]:(*max<*(*arr+i)?*(*arr+i):*max));//max ir min reiksmiu radimas
        *min=(i==0?*arr[i]:(*min>*(*arr+i)?*(*arr+i):*min));
    }
}
void isvedimas(int *arr, int size, int min,int max){
    printf("masyvo elementai be min ir max reiskmiu\n");
    for(int i=0;i<size;i++){//tik salygos
        if(arr[i]!=max&&arr[i]!=min){
            printf("%d\n",arr[i]);
        }
    }
}
void min_max_kiekiai(int *arr,int size,int *min_kiekis,int *max_kiekis,int min, int max){
    *min_kiekis=0;
    *max_kiekis=0;
    int temp_max=0,temp_min=0;
    for(int i=0;i<size;i++){//skaiciuojam kiek reiksmiu yra kurios yra min ir max
        if(max==arr[i]){
           temp_max++;
        }
        if(min==arr[i]){
           temp_min++;
        }
    }
    *min_kiekis=temp_min;
    *max_kiekis=temp_max;
}
int main(){
    int size,min,max,min_kiekis,max_kiekis;
    printf("iveskite kokio dydzio masyvo noretumete\n");
    scanf("%d",&size);
    int *arr;
    nuskaitymas(&arr,size,&min,&max);
    printf("min=%d\nmax=%d\n",min,max);
    min_max_kiekiai(arr,size,&min_kiekis,&max_kiekis,min,max);
    printf("skaiciu lygiu minimumui yra: %d\nskaiciu lygiu maximumui yra: %d\n",min_kiekis,max_kiekis);
    isvedimas(arr,size,min,max);
    free(arr);
    return 0;
}
