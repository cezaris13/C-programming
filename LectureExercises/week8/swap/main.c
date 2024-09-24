#include <stdio.h>
#include <stdlib.h>
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}
