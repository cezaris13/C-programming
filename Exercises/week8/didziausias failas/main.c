#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long getFileSize(char *fileName){
    FILE *fd=fopen(fileName,"rb");
    if(fd == NULL ) {
        printf("%s: neteisingas failo pavadinimas/nera tokio failo\n",fileName);
        return -1;
    }
    else {
        long int sz;
        fseek(fd, 0L, SEEK_END);
        sz = ftell(fd);
        fclose(fd);
        return sz;
    }
}
char *find_biggest(int argc,char *argv[],char *big){
    long int max=0;
    for(int i=1;i<argc;i++){
        long int temp=getFileSize(*(argv+i));
        if(max<temp){
            max=temp;
            *big='\0';
            strcpy(big,argv[i]);
        }
    }
    return big;
}
int main(int argc, char *argv[])
{
    char *big=calloc(255,sizeof(char));
    printf("%s\n",find_biggest(argc,argv,big));
    free(big);
    return 0;
}
