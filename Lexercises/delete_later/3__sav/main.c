#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int tiesa=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i*i==n){
            printf("%d",i);
            tiesa=1;
        }
    }
    if(tiesa==0){
        printf("skaiciaus n sveikosios saknies nera");
    }
    return 0;
}
