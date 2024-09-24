#include <stdio.h>
#include <stdlib.h>
int showMenu(char *menuTitle, char *menuOptions[], int menuSize, char *inputMsg){
    int num,c;
    while(1){
        printf("%s\n",menuTitle);
        for(int i=0;i<menuSize;i++){
            printf("%s\n",menuOptions[i]);
        }
        printf("%s\n",inputMsg);
        if((scanf("%d",&num))==0){
            scanf("%*[^\n]");

        }
        else if(num<=menuSize){
            break;
        }
    }
    return num;
}
int main()
{
   char *pavadinimas="pavadinimas",*ivesties_zinute="prasome ivesti numeri parinkties";
   int menu_dydis=5;
   char *parintys[5]={"vienas","du","trys","keturi","penki"};
   printf("%d\n",showMenu(pavadinimas,parintys,menu_dydis,ivesties_zinute));
    return 0;
}
