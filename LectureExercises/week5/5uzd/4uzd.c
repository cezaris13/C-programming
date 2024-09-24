#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int  s,n;
	scanf("%d%d",&s,&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		while(arr[i]<0){
			scanf("%d",&arr[i]);
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]*arr[i]==s){
				printf("arr[%d]=%d*arr[%d]=%d=%d\n",i,arr[i],j,arr[j],s);
			}
		}
	}
	return 0;
}
