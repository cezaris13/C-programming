#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char  *strncat1(char *vienas,char *antras,int max){//printf("%s\n",*vienas);//kai veiks sitas tada strncat(kas yra char * dest char * string, int max elements)
    int total=strlen(vienas)+strlen(antras);
	int size=strlen(vienas),size2=strlen(antras);
    for(int i=0;i<(size2<max?size2:max);i++){
		vienas[i+size]=antras[i];
   	}
    return vienas;
}
int main()
{
        char str1[10]="labas",str2[10]="rytas";
        char *point=malloc(100*sizeof(char));
        point[99]='\0';
        strncat1(point,str1,3);
        assert(strcmp(point,"lab")==0);
        printf("%s\n",point);
        strncat1(str1,str2,4);
        assert(strcmp(str1,"labasryta")==0);
        printf("%s\n",str1);
        strncat1(point,str1,12);
        assert(strcmp(point,"lablabasryta")==0);
        printf("%s\n",point);
    return 0;
}
