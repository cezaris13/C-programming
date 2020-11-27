#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sarasas[1000]={0},i=0,temp;
    printf("Iveskite seka is 10 nariu(-io)\n");
    while(i < 10){
        printf("Iveskite %d sekos elementa:\n",i+1);
        if((scanf("%d", &temp) == 1) && (getchar() == '\n')){
            if ((temp >= 0) && (temp <= 1000)){
                sarasas[temp]++;
                i++;
            }
            else {
                printf("Virsyti masyvo reziai [0;999]!\n");
            }
        }
        else {
            printf("Netinkama ivestis! Iveskite sveika, neneigiama skaiciu!\n");
            while(getchar() != '\n')
                ;
        }
   }
    for(int i=0;i<1000;i++){
        if(sarasas[i]>0){
            printf("%d..........%d\n",i,sarasas[i]);
        }
    }
    return 0;
}
