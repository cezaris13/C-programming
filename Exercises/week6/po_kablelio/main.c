#include <stdio.h>
#include <stdlib.h>
int countDigit(long long n){
    int count = 0;
    while (n != 0){
        n = n / 10;
        ++count;
    }
    return count;
}
int main(){
    int sveik,kabl;
    size_t line_buf=0;
    char *pavadinimas="duota.txt";
    while(1){
        FILE *fd=fopen(pavadinimas,"r");
        char c;
        fscanf(fd,"%d %c %d",&sveik,&c,&kabl);
        fclose(fd);
        if(sveik>=10&&sveik<=1000&&kabl/1000==0){
             printf("bendras skaitmenu kiekis: %d",countDigit(sveik)+countDigit(kabl));
             break;
        }
        else{
            printf("neteisingai pateikti duomenys faile, prasome ivesti kito failo su korektiskais duomenimis pavadinima\n");
            getline(&pavadinimas,&line_buf,stdin);
            pavadinimas[strlen(pavadinimas)-1]='\0';
        }
    }
    return 0;
}
