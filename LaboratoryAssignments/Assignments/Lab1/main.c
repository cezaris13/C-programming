#include <stdio.h>
#include <stdlib.h>

int main()
{
    int G;//nuskaitomas sekos narys
    int skaicius=0;//nuskaitomas skaicius
    int kiekis_visi=0;//skaiciuojame visus sekos narius
    int kiekis_teigiami=0;//tik teigiamus sekos narius
    int suma_neigiami=0;//sumuojame neigiamus sekos narius
    int neigiamu_sandauga=1;//dauginam neigiamus sekos narius
    int yra_neigiamas=0;
    printf("prasome ivesti G kintamaji- skaiciu, kuri ivedus sustos sekos skaitymas\n");
    while(scanf("%d",&G)!=1){//validacija jei ivedamas ne skaicius
            printf("Netinkama ivestis prasome ivesti skaiciu\n");
            scanf("%*[^\n]");
    }
    for(;1;){//sukam cikla kol sekos narys nera G
        printf("iveskite sekos nari\n");
        while(scanf("%d",&skaicius)!=1){//validacija jei ivedamas ne skaicius
            printf("Netinkama ivestis prasome ivesti skaiciu\n");
            scanf("%*[^\n]");
        }
        if(skaicius==G){
            break;
        }
        kiekis_visi++;//sumuojame nariu skaiciu
        kiekis_teigiami+=(skaicius>=0?1:0);//sumuojame teigiamu nariu kieki
        suma_neigiami+=(skaicius<0?skaicius:0);//neigiamu skaiciu suma
        neigiamu_sandauga*=(skaicius<0?skaicius:1);//neigiamu skaiciu sandauga
        yra_neigiamas+=(skaicius<0?1:0);//tikriname ar yra neigiamu skaiciu
    }//while ciklo salyginis sakinys, kuris suka vienu daugiau cikla, t.y. uzskaitomas sekos narys G prie duomenu
    printf("sekos nariu kiekis %d",kiekis_visi);//spausdinimai
    printf("\nteigiamu nariu kiekis %d",kiekis_teigiami);
    if(yra_neigiamas>0){//jei neigiamu yra 0, tai nebuvo neigiamu
        printf("\nneigiamu nariu suma %d",suma_neigiami);
        printf("\nneigiamu skaiciu sandauga %d",neigiamu_sandauga);
    }
    else{
        printf("\nneigiamu skaiciu nera");
    }
    return 0;
}
