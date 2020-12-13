//#include <stdio.h>
//#include <stdlib.h>
//
//struct el {
// int duom;
// struct el *kitas;
//};
//
//
//int main()
//{
//   struct el *pradzia, *pabaiga, *elem;
//   pradzia = NULL;
// pabaiga = NULL;
//    return 0;
//}
//
//


#include <stdio.h>
#include <stdlib.h>

struct el
{
  int skaicius;
  struct el *kitas;
};

typedef struct el Sarasas;

void Sukurti_Sarasa(Sarasas **, int *);
void Spausdinti_Sarasa(Sarasas *);
void Prideti_Elementa(Sarasas **, int *);
void Pasalinti_Elementa(Sarasas **);
void Naikinti_Sarara(Sarasas **);

int main ()
{
    Sarasas *pradzia;
    int suk = 0, prid = 0;
    Sukurti_Sarasa(&pradzia, &suk);
    Prideti_Elementa(&pradzia, &prid);
    Spausdinti_Sarasa(pradzia);
    Pasalinti_Elementa(&pradzia);
    Spausdinti_Sarasa(pradzia);
    Prideti_Elementa(&pradzia, &prid);
    Spausdinti_Sarasa(pradzia);
    Pasalinti_Elementa(&pradzia);
    Spausdinti_Sarasa(pradzia);
    Naikinti_Sarasa(&pradzia);
    Spausdinti_Sarasa(pradzia);
    return 0;
}

void Sukurti_Sarasa(Sarasas **pradzia, int *suk)
{
    if(!*suk)
    {
        *pradzia = NULL;
        *suk = 1;
    }
    else printf("Sarasas jau buvo sukurtas. \n");
}

void Spausdinti_Sarasa(Sarasas *pradzia)
{
    int i = 1;
    printf("*****************************************\n");
    printf("\nSpausdiname sarasa:\n");
    if (pradzia != NULL)
        while(pradzia != NULL)
        {
            printf("%d elementas yra %d\n", i, pradzia->skaicius);
            pradzia = pradzia->kitas;
            i++;
        }
    else printf("Saraso nera.\n");
    printf("*****************************************");
}

void Prideti_Elementa(Sarasas **pradzia, int *prid)
{
    Sarasas *tmp = *pradzia;
    int reiksme;
    printf ("\nIveskite saraso elementus, jeigu norite baigti sarasa, iveskite 0:\n");
    scanf ("%d", &reiksme);
    Sarasas *ankstesnis = NULL;
    if (*prid)
    {
        while (tmp->kitas != NULL)
        tmp = tmp->kitas;
        ankstesnis = tmp;
    }
    while (reiksme != 0)
    {
        tmp = (Sarasas*) malloc (sizeof (Sarasas));
        tmp->skaicius = reiksme;
        if (*pradzia == NULL)
            *pradzia = tmp;
        else ankstesnis->kitas = tmp;
        tmp->kitas = NULL;
        ankstesnis = tmp;
        scanf ("%d", &reiksme);
    }
    *prid = 1;
}

void Naikinti_Sarasa(Sarasas **pradzia)
{
    int suk = 0;
    struct Sarasas *laikinas;
    while(*pradzia != NULL)
    {
        laikinas = *pradzia;
        *pradzia = (*pradzia)->kitas;
        free(laikinas);
    }
}

void Pasalinti_Elementa(Sarasas **pradzia)
{
    int reiksme;
    int busena = 0;
    printf("*****************************************");
    printf("\nKokia reiksme norite pasalinti?\n");
    scanf("%d", &reiksme);
    Sarasas *laik2 = *pradzia;
    Sarasas *ankstesnis = NULL;
    while(laik2 != NULL)
    {
        if(laik2->skaicius == reiksme)
        {
            busena = 1;
            Sarasas *laik = laik2;
            if(*pradzia == laik2)
                *pradzia = laik2->kitas;
            if(ankstesnis != NULL)
            ankstesnis->kitas = laik2->kitas;
            laik = laik2;
            laik2 = laik2->kitas;
            free(laik);
        }
        else
        {
            ankstesnis = laik2;
            laik2 = laik2->kitas;
        }
    }
    if(busena == 0)
        printf("Tokios reiksmes sarase nera.\n");
}
