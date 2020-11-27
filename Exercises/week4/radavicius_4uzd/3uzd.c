#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a,b,c,koef=0;
	scanf("%d %d %d",&a,&b,&c);
	int i=1;
	while(i<=c){
		if(i%2==0){
			a+=b;
		}
		else{
			b+=a;
		}
		++i;
	}
	printf("%d-tasis sekos narys: %d\n",c,(c%2==0?a:b));
return 0;
}
