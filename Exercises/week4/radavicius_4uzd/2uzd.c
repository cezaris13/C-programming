#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a,b,c,koef=0;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=a+1;i<=b;i=i+1+koef){
		if(i%c==1){
			printf("skaicius dalus is %d su liekana 1 yra:%d\n",c,i);
			koef=(koef==0?c-1:koef);
		}
	}
return 0;
}
