#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int number;
	int maxx=0;
	while(number>0){
		scanf("%d",&number);
		maxx=(maxx<number?number:maxx);
	}
	printf("daugiausia skaitmenu turintis skaicius:%d\n",maxx);
return 0;
}
