#include <stdio.h>
#include <stdlib.h>
#include "sarasas.h"

int main(){
    Node *head;
    head = NULL;
    int n,pos,val;
    printf("iveskite kokio dydzio saraso noresite:");
    scanf("%d",&n);
    CreateList(n,&head);
    PrintList(head);
    printf("\niveskite elementa, kuri norite pamatyti:");
    scanf("%d",&pos);
    PrintElement(pos,head);
    printf("\niveskite elementa, kuri norite istrinti:");
    scanf("%d",&pos);
    DeleteNode(pos,&head);
    printf("\nspausdiname vienpusi sarasa istrynus reiksme\n");
    PrintList(head);
    printf("\niveskite elemento reiksme ir pozicija i kuria norite iterpti");
    scanf("%d %d",&val,&pos);
    InsertNode(pos,val, &head);
    printf("\nspausdiname vienpusi sarasa iterpus reiksme\n");
    PrintList(head);
    printf("triname visa vienpusi sarasa\n");
    DeleteNodes(&head);
    printf("\n");
    PrintList(head);
    return 0;
}
