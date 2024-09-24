#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int  a,b,c;
	int arr[1000];
	scanf("%d%d%d",&a,&b,&c);
	for(int i=0;i<c;i++){
		int temp=rand()%(b-a+1);
		temp+=a;
		arr[i]=temp;
	}
	for(int i=0;i<c;i++){
		printf("intervalui [%d,%d] priklausanti reiksme: %d\n",a,b,arr[i]);
	}
	return 0;
}
