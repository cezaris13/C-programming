#ifndef filec
#define filec
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 20
struct Node{
    int value;
    struct Node *next;
};
typedef struct Node Node;

void create_node(Node **list, int firstValue){
    Node *temp = malloc(sizeof(Node));
    temp->value = firstValue;
    temp->next = NULL;
    *list = temp;
}
void delete_nodes(Node **list){
    Node *temp = *list;//priskiriam saraso elemento pradzia
    while (*list!=NULL){
       *list = (*list)->next;//pajudam i sekanti elementa
       printf("Istriname %d\n", temp->value);
       free(temp);//atlaisvinam pries tai buvusi
       temp = *list;//priskiriam curr elemento reiksme
    }
}
void Spausdinti_Sarasa(Node *pradzia){
    int i = 1;
    printf("*****************************************\n");
    printf("Spausdiname sarasa:\n");
    Node *curr=pradzia;
    if(pradzia!=NULL){
        while(curr!=NULL){
            printf("%d.elementas=%d\n",i,curr->value);
            i++;
            curr=curr->next;
        }
    }
    else{
        printf("saraso nera\n");
    }
    printf("*****************************************\n");
}
void create_nodes(int n,Node **pradzia){
    if(n<1){//jei jo dydis mazenis uz nuli reiskias nebus sukuriamas vienpusis sarasas, apie tai pranesama vartotojui
        printf("Ivestas permazas dydis, sarasas nebuvo sukurtas\n");
        return 0;
    }
    srand(time(NULL));
    Node *elem=(Node*)malloc(sizeof(Node));//elementas kuriame bus sukuriamos naujos reiskmes saraso
    Node *temp=malloc(sizeof(Node));// laikinas vienpusio saraso talpinimas
    create_node(&elem,rand()%MAX);
    temp=elem;// priskiriam pirmam elementui reiksme
    *pradzia=temp;//issaugojam i pradzia pradini temp strukturos elementa t.y. saraso pradzia
    if(n==1){//jei reikejo saraso is 1 elemento tai stabdom
        return;
    }
    for(int i=0;i<n-1;i++){//uzpildomas sarasas
        create_node(&elem,rand()%MAX);
        temp->next=elem;
        temp=temp->next;
    }
}
void print_element(int pos, Node *pradzia){
    Node *temp=pradzia;
    int i=1;
    while(i!=pos&&temp->next!=NULL){//sukam cikla kol nepasiekiam pabaigos ir  i nera lygu pos
        temp=temp->next;
        i++;
    }
    if(pos!=i){// jei pasibaigus ciklui nera i== pos reiskias toks elementas su pozicija pos neegzistuoja
        printf("tokios reiksmes nera\n");
    }
    else{
        printf("%d. reiksme=%d\n",i,temp->value);//priesingu atveju spausdinam jo reiksme
    }
}
void delete_node(int pos,Node **pradzia){
    Node *temp=*pradzia,*prev;
    if(*pradzia!=NULL){// tikrinam ar sarasas nera tuscias
        int i=1;
        while(temp->next!=NULL&&i!=pos){//sukam kol nepasiekem pabaigos ir kol nerandam reikiamo elemento
            prev=temp;
            temp=temp->next;
            i++;
        }
        if(i!=pos){//jei pasibaigus ciklui i nera lygu pos reiskias pasibaige sarasas ir tokio elemento nera
            printf("tokio elemento sarase nera\n");
        }
        else{
            printf("istrinamas %d.elementas %d\n",i,temp->value);//radom toki elementa ir ji istrinam
            if(pos==1){//jei pirmas tai reikia tiesiog pradzia nukirpti sitaip
               *pradzia=(*pradzia)->next;
            }
            else{//o jei kazkur kitur tai sujungiam pries elementa esanti nari su sekanciu ir atlaisivan norimo istrinti elemento atminti
                prev->next=temp->next;
            }
            free(temp);
        }
    }
    else{
        printf("tuscias sarasas negalima trinti nieko\n");
    }
}
#endif // filec
