#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 255

char first_letter(char word[], int size){//jei simbolis raide kas yra zemiau esantys intervalai tai grazina raide else '1' vieneta kas parodys kad nereik pakeisti elementu
    for(int i = 0; i < size; i++){
        if( (word[i] <='Z' && word[i] >= 'A') || (word[i] <='z' && word[i] >='a') )
        {
            return word[i];
        }
    }
    return 0;
}
void numbers(char first_letter, char word[], int size){//kiekviena skaiciu pakeicia raide gauta
    for(int i = 0; i < size; i++)
    {
        if(word[i] >= '0' && word[i] <= '9')//tarp [0,9]
        {//intervalas simbolio kurie yra 0-9
            word[i] = first_letter;
        }
    }
}
void bendra_funkcija(char *newline,char *line,int line_size){
    int count = 0;//skaiciuojam masyvo dydi kuriame saugojamas 1 zodis
    char *word = calloc(MAX, sizeof(char));//rodyklei priskiriam 255 vietos atminty kurios yra NULL
    for(int i = 0; i < (line_size < MAX ? line_size : MAX); i++)
    {//sukam cikla kol eilute baigiasi arba iki 255 elemento
        if(line[i] == ' ' || line[i] == '\n' || i == MAX-1)//*(line + i)
        {
            char first_l = first_letter(word,count);//
            if(first_l != 0)
            {// cia tikrinam jei nerasta zody raide
                numbers(first_l, word, count);
            }
            word[count] = (i == MAX-1 ? '\n' : line[i]);// pridedam arba tarpa arba \n priklauso koks buvo line ar pasiekem 255 elementa
            strcat(newline,word);// vietoj zodzio isvedimo i faila mes papildom naujos eilutes kintamaji tuo zodziu
            count = 0;//nunulinam zodi ir isvalom jo reiksmes
            memset(word,0,sizeof(word));
        }
        else
        {
            word[count] = line[i];//priesingu atveju mes saugom reiksmes toliau
            count++;
        }
    }
    free(word);//atlaisvinam atminti
}
int main(int argc, char *argv[]){
    printf("Parasyti programa, kuri zodyje esancius skaitmenis pakeicia pirmaja to zodzio raide\n");
    if(argc<3)
    {
        printf("nebuvo pateikti failo/u pavadinimai\n");
    }
    else{
        FILE *fd = fopen(*(argv+1), "r");
        FILE *fr = fopen(*(argv+2), "w");
        if(ferror(fd))
        {
            printf("Problema su duomenu failu");
            return 0;
        }
        if(ferror(fr))
        {
            printf("Problema su rezultatu failu");
            return 0;
        }
        char *line = NULL;//char'o rodykle kuri pakolkas rodo i nieka
        size_t line_buf_size = 0;//cia yra line dydis bitais, kai virsija eilutes ilgis line dydi realloc iskvieciamas ir padidina
        int line_size;//nuskaitytos eilutes dydis
        line_size = getline(&line, &line_buf_size, fd);
        while (line_size >= 0)
        {//skaitom is failo kol eilutes dydis 0 ( su getline cia veikia)
            char *newline=calloc(MAX,sizeof(char));
            bendra_funkcija(newline,line,line_size);
            fputs(newline,fr);
            free(newline);
            line_size = getline(&line, &line_buf_size, fd);
        }
        free(line);//atlaisvinam
        line = NULL;
        fclose(fd);//uzdarom failus
        fclose(fr);
    }
    return 0;
}
