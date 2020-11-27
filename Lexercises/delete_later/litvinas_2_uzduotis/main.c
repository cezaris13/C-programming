#include <stdio.h>
#include <stdlib.h>
#define MAX 255

char first_letter(char *word,int size){//jei simbolis raide kas yra zemiau esantys intervalai tai grazina raide else '1' vieneta kas parodys kad nereik pakeisti elementu
    for(int i=0;i<size;i++){
        if((*(word+i)<91&&*(word+i)>64)||*(word+i)<123&&*(word+i)>96)
        return *(word+i);
    }
    return '1';
}
void numbers(char first_letter,char *word,int size){//kiekviena skaiciu pakeicia raide gauta
    for(int i=0;i<size;i++){
        if(*(word+i)-48>=0&&*(word+i)-48<=9){//intervalas simbolio kurie yra 0-9
            *(word+i)=first_letter;
        }
    }
}
int main(int argc, char *argv[]){
    FILE *fd = fopen(*(argv+1), "r");
    FILE *fr = fopen(*(argv+2), "w");
    if(ferror(fd)){
        printf("Problema su duomenu failu");
        return 0;
    }
    if(ferror(fr)){
        printf("Problema su rezultatu failu");
        return 0;
    }
    char *line_buf = NULL;//char'o rodykle kuri pakolkas rodo i nieka
    size_t line_buf_size = 0;//kas cia
    int line_size;//kas cia
    line_size = getline(&line_buf, &line_buf_size, fd);
    while (line_size >= 0){//skaitom is failo kol eilutes dydis 0 ( su getline cia veikia)
        int count=0;//skaiciuojam masyvo dydi kuriame saugojamas 1 zodis
        char *word=calloc(MAX,sizeof(char));//rodyklei priskiriam 255 vietos atminty kurios yra NULL
        for(int i=0;i<(line_size<MAX?line_size:MAX);i++){//sukam cikla kol eilute baigiasi arba iki 255 elemento
            if(*(line_buf+i)==' '||*(line_buf+i)=='\n'||i==MAX-1){
                char first_l=first_letter(word,count);//
                if(first_l!='1'){// cia tikrinam jei nerasta zody raide
                    numbers(first_l, word, count);
                }
                *(word+count)=(i==MAX-1?'\n':*(line_buf+i));// pridedam arba tarpa arba \n priklauso koks buvo line_buf ar pasiekem 255 elementa
                fputs(word,fr);
                count=0;//nunulinam zodi ir isvalom jo reiksmes
                word=calloc(MAX,sizeof(char));//padaro null reiksmes

            }
            else{
                word[count]=line_buf[i];//priesingu atveju mes saugom reiksmes toliau
                count++;
            }
        }
        free(word);//atlaisvinam atminti
        line_size = getline(&line_buf, &line_buf_size, fd);
    }
    free(line_buf);//atlaisvinam
    line_buf = NULL;
    fclose(fd);//uzdarom failus
    fclose(fr);
    return 0;
}
