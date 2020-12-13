#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char *strst(char *first, char *second){//+
    int str1=strlen(first),str2=strlen(second);
    if(str2>str1){
        return NULL;
    }
    else{
        for(int i=0;i<=(str1-str2);i++){
            char rado=1;
            for(int j=0;j<str2;j++){
                if(first[i+j]!=second[j]){
                    rado=0;
                }
            }
            if(rado==1){
                return (first+i);
            }
        }
    }
}

int main()
{
	char str1[100]="laba diena pijau",str2[10]="pijau";
	char *ans=strst(str1,str2);
//	printf("%d %s",ans,ans);
    assert(strst("kazkas","kazkas labai didelio")==NULL);
    assert(strcmp(strst(str1,str2),str2)==0);
    return 0;
}
