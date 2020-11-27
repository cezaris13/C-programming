#include <stdio.h>
#include <stdlib.h>
int countt(int it,char *line,char s){
    int c=0;
    for(int i=it;i<strlen(line);i++){
        if(line[i]==s){
            c++;
        }
    }
    return c;
}
int korektiskas(char *line){
    int eta=countt(0,line,'@');
    if(eta==1){
        int dot=countt(strstr(line,"@")-line,line,'.');
        if(dot>0&& strstr(strstr(line,"@"),".")-strstr(line,"@")>1){
            return 1;
        }
    }
    return 0;
}

int main()
{
   char *line;
   size_t line_buf=0;
   getline(&line,&line_buf,stdin);
   FILE *fr=fopen("emails.txt","a");
   if(korektiskas(line)){
        fputs(strstr(line,"@")+1,fr);
   }
   else{
        printf("netinkamas email'o uzrasas\n");
   }
   fclose(fr);
    return 0;
}
