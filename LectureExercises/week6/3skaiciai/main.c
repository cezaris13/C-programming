#include <stdio.h>
#include <stdlib.h>
int middle(int a,int b, int c){
    if ((a < b && b < c) || (c < b && b < a))
       return b;
    else if ((b < a && a < c) || (c < a && a < b))
       return a;
    else
       return c;
}
int main()
{
    int a,b,d;
    printf("iveskite 3 skaicius atskirtus ; simboliu\n");
    char c;
    scanf("%d%c%d%c%d",&a,&c,&b,&c,&d);
    printf("iveskite failo, i kuri bus saugojamas atsakymas\n");
    char *line;
    size_t line_buf=0;
    getline(&line,&line_buf,stdin);
    getline(&line,&line_buf,stdin);
    while(strstr(line,".txt")==NULL){
          printf("iveskite failo, i kuri bus saugojamas atsakymas\n");
          getline(&line,&line_buf,stdin);
    }
    FILE *fr=fopen(line,"w");
    int ans=middle(a,b,d);
    fprintf(fr,"%d",ans);
    return 0;
}
