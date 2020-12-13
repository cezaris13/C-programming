#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
int strl(char *zodis){//+
    int i=0;
    while(zodis[i]!='\0'){
        i++;
    }
    return i;
}
int main()
{
	assert(strl("hey") == 3);
    assert(strl("") == 0);
    assert(strl("Labas") == 5);
    assert(strl("LabaDienaSunkuDetTarpus") == 23);
    assert(strl("A ir B") == 6);
    return 0;
}
