#include <stdio.h>
#include <stdlib.h>
#include "sarasas.h"

int main()
{
    Node *pradzia;
    pradzia = NULL;
    int n;
    printf("iveskite kokio dydzio saraso noresite:");
    scanf("%d",&n);
    create_nodes(n,&pradzia);
    Spausdinti_Sarasa(pradzia);
    print_element(3,pradzia);
    for(int i=1;i<=n;i++){
         print_element(i,pradzia);
    }
    printf("iveskite elementa kuri norite istrinti:");
    int pos;
    scanf("%d",&pos);
    delete_node(pos,&pradzia);
    Spausdinti_Sarasa(pradzia);
    clearList(&pradzia);
    printf("\n");
    Spausdinti_Sarasa(pradzia);
    return 0;
}
