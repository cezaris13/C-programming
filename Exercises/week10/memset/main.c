#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void mems(char *zodis, char val, int size){
    for(int i=0;i<size;i++){
        *(zodis+i)=val;
    }
}
int main()
{
	char *str;
    str = calloc(20,sizeof(char));
    mems(&str, '1', 2);
    assert(str[0] == '1');
    mems(&str, '-', 3);
    assert(str[2] == '-');
    mems(&str, 'a', 0);
    assert(str[0] == '-');
    return 0;
}
