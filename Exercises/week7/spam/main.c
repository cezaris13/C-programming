#include <stdio.h>
#include <stdlib.h>
int getPositiveNumber(char *msg){
    int num;
    while(1){
        printf("%s\n",msg);
        if((scanf("%d",&num))==0){
            scanf("%*[^\n]");
        }
        else if(num>=0){
            break;
        }
    }
    return num;
}
int main()
{
    getPositiveNumber("iveskite teigiama skaiciu");
    return 0;
}
