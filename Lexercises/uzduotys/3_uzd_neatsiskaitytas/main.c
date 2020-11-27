#include <stdio.h>
#include <stdlib.h>
int check_magic(int *masyvas,int n){
    int *eilutes=calloc(n,sizeof(int)),*stulpeliai=calloc(n,sizeof(int)),pagrindine_istrizaine=0,salutine_istrizaine=0;
    int vienodas_eiluciu,vienodas_stulpeliu;
    for(int i=0;i<n;i++){
        int tempe=0,temps=0;
        pagrindine_istrizaine+=*(masyvas+i*n+i);
        salutine_istrizaine+=*(masyvas+i*n+n-1-i);
        for(int j=0;j<n;j++){
            tempe+=*(masyvas+i*n+j);
            temps+=*(masyvas+j*n+i);
        }
        eilutes[i]=tempe;
        stulpeliai[i]=temps;
        if(i==0){
            vienodas_eiluciu=tempe;
            vienodas_stulpeliu=temps;
        }
        else{
            if(vienodas_eiluciu!=eilutes[i]|| vienodas_stulpeliu!=stulpeliai[i]){
                return 0;
            }
        }
    }
    if(vienodas_eiluciu!=vienodas_stulpeliu&&pagrindine_istrizaine!=salutine_istrizaine&&pagrindine_istrizaine!=vienodas_eiluciu){
        return 0;
    }
    return 1;
}
int main()
{
   int n;
   printf("Ivesti sveika skaiciu N. Ivesti N*N sveiku skaiciu, kurie sudarys kvadratine matrica. Patikrinti ar matrica yra magiskas kvadratas\n");
   scanf("%d",&n);
   int *masyvas=calloc(n*n,sizeof(int));
   for(int i=0;i<n*n;i++){
        scanf("%d",masyvas+i);
   }
   if(check_magic(masyvas,n)){
        printf("taip, tai yra magiskas kvadratas\n");
   }
   else{
        printf("ne, tai nera magiskas kvadratas\n");
   }
    return 0;
}
