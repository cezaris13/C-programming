#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char  *strcat1(char *vienas,char *antras){
    int total=strlen(vienas)+strlen(antras);
	int size=strlen(vienas);
    for(int i=0;i<strlen(antras);i++){
		vienas[i+size]=antras[i];
   	}
    return vienas;
}
int main()
{
	char str1[100]="labas",str2[10]="rytas";
	char *point=malloc(100*sizeof(char));
	point[99]='\0';
	strcat1(point,str1);
	assert(strcmp(point,"labas")==0);
	printf("%s\n",point);
	strcat1(str1,str2);
	assert(strcmp(str1,"labasrytas")==0);
	printf("%s\n",str1);
	strcat1(point,str1);
	assert(strcmp(point,"labaslabasrytas")==0);
	printf("%s\n",point);
    return 0;
}
