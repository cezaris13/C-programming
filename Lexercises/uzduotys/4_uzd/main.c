#include <stdio.h>
#include <stdlib.h>
#include "sarasas.h"

int main(){
    Node *pradzia;
    pradzia = NULL;
    int n,pos;
    printf("iveskite kokio dydzio saraso noresite:");
    scanf("%d",&n);
    create_nodes(n,&pradzia);
    Spausdinti_Sarasa(pradzia);
    printf("\nspaudinami elementai nuo 1 iki n naudojant print_element() funkcija\n");
    for(int i=1;i<=n;i++){
         print_element(i,pradzia);
    }
    printf("\niveskite elementa kuri norite istrinti:");
    scanf("%d",&pos);
    delete_node(pos,&pradzia);
    printf("\nspausdiname vienpusi sarasa istrynus reiksme\n");
    Spausdinti_Sarasa(pradzia);
    printf("triname visa vienpusi sarasa\n");
    delete_nodes(&pradzia);
    printf("\n");
    Spausdinti_Sarasa(pradzia);
    return 0;
}
