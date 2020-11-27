#include <stdio.h>
#include <stdlib.h>

int main(){
    int skaicius=1;//nuskaitomas sekos narys
    int maximalus=-1000;//maximalios reiksmes kintamasis, kurio pradine reiksme 0
    while(skaicius!=0){//sukam cikla kol sekos narys nera 0
        scanf("%d",&skaicius);
        maximalus=(maximalus<skaicius?skaicius:maximalus);//jei nuskaitytas skaicius yra didesnis uz maximalia reiksme, ji tampa maximalia, priesingu atveju lieka kokia ir buvo
    }
    printf("%d",maximalus);//maximalios reiksmes spausdinimas
    return 0;
}
