#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int D=b*b-4*a*c,cont=0;
	cont=(D>=0?1:0);
	printf("D=%d\n",D);
	if(D>0){
		printf("is viso sprendiniu yra: 2\n");
	}
	if(D==0){
		printf("is viso sprendiniu yra: 1\n");
	}
	if(D<0){
		printf("is viso sprendiniu yra: 0\n");
	}
	if(cont){
	    double sq= sqrt((double)D);
		double x1=((-1*b)-sq)/(2*a);
		double x2=((-1*b)+sq)/(2*a);
		if(D>0){
			printf("sprendiniai yra \nx1:%f \nx2:%f ",x1,x2);
		}
		else{
			printf("sprendiniai yra \nx1:%f \n ",x1);
		}
	}
return 0;
}
