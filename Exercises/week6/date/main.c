#include <stdio.h>
#include <stdlib.h>
int dow(m,d,y){
     y-=m<3;
     return(y+y/4-y/100+y/400+"-bed=pen+mad."[m]+d-1)%7;
}
int main()
{
    FILE *fd=fopen("week.txt","r");
    int y,m,d;
    char c;
    while((m<1||m>12)||(d<1||d>31)){
        scanf("%d%c%d%c%d",&y,&c,&m,&c,&d);
    }
    char weekdays[7][20]={0};
    char *temp;
    size_t line_buf=0;
    int line_size;
    for(int i=0;i<7;i++){
        line_size=getline(&temp,&line_buf,fd);
        strcat(weekdays[i],temp);
    }
    fclose(fd);
    printf("%s\n",weekdays[dow(m,d,y)]);
    return 0;
}
