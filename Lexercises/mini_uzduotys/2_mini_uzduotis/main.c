#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_hello(char eilute[]){
    char hello[]="labas";
    int size=strlen(eilute),hello_size=strlen(hello);
    for(int i=size;i<size+hello_size;i++){
        eilute[i]=hello[i-size];
    }
    eilute[size+hello_size]='\0';
}
int main()
{
    char eilute[1000];
    printf("iveskite simboliu eilute\n");
    gets(eilute);
    add_hello(eilute);
    printf("gauta eilute pridejus 'hello' prie jos galo\n");
    printf("%s",eilute);
    return 0;
}
