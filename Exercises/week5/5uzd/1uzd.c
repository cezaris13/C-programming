#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ismetimas(int poz,int &n, int arr[]){
	for(int i=poz;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
}
void iterpimas(int poz,int &n,int arr[],int val){
	for(int i=n;i>poz;i--){
		arr[i]=arr[i-1];
	}
	arr[poz]=val;
	n++;
}
void spausdinti(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("arr[%d]-%d\n",i,arr[i]);
	}
	printf("\n");
}
int main(){
	int x,y,n=10,arr[10]={0};
	spausdinti(arr,n);
	arr[0]=1;
	arr[3]=2;
	arr[9]=3;
	ismetimas(3,n,arr);
	iterpimas(6,n,arr,4);
	spausdinti(arr,n);
	printf("iveskite 2 skaicius x- indeksas, y- reiskme\n");
	scanf("%d%d",&x,&y);
	if(x<10&&x>-1){
		arr[x]=y;
	}
	else{
		printf("nepavyko issaugoti duotos reiksmes i masyva(iseita is ribu)\n");
	}
	printf("iveskite skaiciu x- indeksas elemento kuri norite ismesti\n");
	scanf("%d",&x);
	if(x<10&&x>-1){
		ismetimas(x,n,arr);
	}
	else{
		printf("nepavyko ismesti  i-tosios reiskmes is  masyvo(iseita is ribu)\n");
	}
	printf("iveskite skaiciu x- indeksas elemento i kuri norite irasyti y- reiskme\n");
	scanf("%d%d",&x,&y);
	if(x<10&&x>-1){
		iterpimas(x,n,arr,y);
	}
	else{
		printf("nepavyko irasyti  i i-taji masyvo indexa y reiksmes(iseita is ribu)\n");
	}



	spausdinti(arr,n);
return 0;
}

