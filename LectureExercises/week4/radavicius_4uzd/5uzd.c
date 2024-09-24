#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n;
	int maxx=0;
	double vidurkis=0,maxi,mini;
	scanf("%d",&n); 
	for(int i=0;i<n;i++){
		float temp;
		scanf("%f",&temp);
		vidurkis+=temp;
		if(!maxx){
			maxi=temp;
			mini=temp;
			maxx=1;	
		}
		maxi=(maxi<temp?temp:maxi);
		mini=(mini>temp?temp:mini);
	}
	printf("skaiciu suma: %f \nvidurkis: %f \nmaziausia reiksme: %f \ndidziausia reiksme %f",vidurkis,vidurkis/n,mini,maxi);
return 0;
}
