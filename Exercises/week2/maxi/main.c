#include <stdio.h>
#include <stdlib.h>

int maximum(int a,int b,int c){
    int temp=a^((a^b)&-(a<b));
    return (temp^(temp^c)&-(temp<c));
}
int test(int a, int b,int c, int d){
    int temp=maximum(a,b,c);
    printf("maximum reiksme skaiciu %d %d %d yra %d,turejo buti: %d\n",a,b,c,temp,d);
    return (temp==d);
}
int main()//rasti max reiksme tarp 3 elementu nenaudojant if'u
{
   int a,b,c,pass=0;
   int arr[13][4]={1,1,3,3,
   1,3,3,3,
   3,3,3,3,
   0,0,0,0,
   -1,0,1,1,
   3,3,2,3,
   3,2,3,3,
   -1,-2,-3,-1,
   1000000,1000001,1000002,1000002,
   -100000,0,100000,100000,
   2147483647,2147483647,2147483647,2147483647,
    2147483647,1,2147483647,2147483647,
    -2147483647,1,2147483647,2147483647,
   };
   printf("iveskite 3 skaicius\n");
   scanf("%d%d%d",&a,&b,&c);
   printf("%d\n",maximum(a,b,c));
   for(int i=0;i<13;i++){
     pass+=test(arr[i][0],arr[i][1],arr[i][2],arr[i][3]);
   }
   printf("is viso praeita testu: %d/13",pass);
   return 0;
}
