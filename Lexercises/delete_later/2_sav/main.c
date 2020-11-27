#include <stdio.h>
#include <stdlib.h>
int n;
void sort(char *zodis[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(zodis[i]>zodis[j]){
                char *temp=zodis[i];
                zodis[i]=zodis[j];
                zodis[j]=temp;
            }
        }
    }
}
int main()
{
    printf("iveskite sekos nariu skaiciu\n");
    scanf("%d",&n);
    char sarasas[n+1][80];
    for(int i=0;i<n+1;i++){
        gets(sarasas[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(sarasas[i]>sarasas[j]){
                char *temp=sarasas[i];
                printf("%s\n",temp);
                *sarasas[i]=sarasas[j];
                printf("%s",temp);
                *sarasas[j]=temp;
            }
        }
    }
    for(int i=1;i<n+1;i++){
            if(strcmp(sarasas[i],sarasas[i+1])){
                printf("nepasikartojantys zodziai:%s\n",sarasas[i]);
            }
    }
    return 0;
}
