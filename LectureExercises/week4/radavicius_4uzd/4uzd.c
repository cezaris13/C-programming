#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a,b,c,koef=0;
	scanf("%d %d %d",&a,&b,&c);
	int mini=(a<b?a:b);
	mini=(mini<c?mini:c);
	int dbd=1,mbk=a*b*c;
	for(int i=mbk;i>0;i--){
		if(i%a==0&&i%b==0&&i%c==0){
			mbk=i;
		}
	}
	for(int i=1;i<=mini;i++){
		if(a%i==0&&b%i==0&&c%i==0){
			dbd=i;
		}	
	}
	printf("didziausias skaiciu %d,%d,%d daliklis: %d\nmaziausias bendras kartotinis: %d",a,b,c,dbd,mbk);
return 0;
}
