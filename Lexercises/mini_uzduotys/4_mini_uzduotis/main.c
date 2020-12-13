#include <stdio.h>
#include <stdlib.h>
struct Struktura{
    int arr[5];
};
typedef struct Struktura Struktura;

void keiciam_i_penkis(int arr[],Struktura *st){
   for(int i=0;i<5;i++){
        arr[i]=5;
        st->arr[i]=5;
    }
}
int main()
{
    Struktura st;
    int arr[5];
    for(int i=0;i<5;i++){
        arr[i]=1;
        st.arr[i]=1;
    }
    keiciam_i_penkis(arr,&st);
    for(int i=0;i<5;i++){
        printf("arr[%d]=%d\n",i,arr[i]);

    }
    for(int i=0;i<5;i++){
        printf("st.arr[%d]=%d\n",i,st.arr[i]);
    }

    return 0;
}
