#include <stdio.h>
#include <stdlib.h>
long getFileSize(char *fileName){
    FILE *fd=fopen(fileName,"rb");
    if(fd == NULL ) {
        printf("neteisingas failo pavadinimas\n");
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
int main()
{
   char *filename;
   size_t line_buf=0;
   getline(&filename,&line_buf,stdin);
   filename[strlen(filename)-1]='\0';
   printf("%ld",getFileSize(filename));
    return 0;
}
