#ifndef filec
#define filec
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 20
struct Node {
 int value;
 struct Node *next;
};
typedef struct Node Node;

void create_node(Node **list, int firstValue){
    Node *temp = NULL;
    temp = malloc(sizeof(Node));
    temp->value = firstValue;
    temp->next = NULL;
    *list = temp;
}
void clearList(Node **list){
    Node *temp = *list;
    while (*list){
       *list = (*list)->next;
       printf("Deleting %d\n", temp->value);
       free(temp);
       temp = *list;
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
    if(n<1){
        printf("Ivestas permazas dydis, sarasas nebuvo sukurtas\n");
        return 0;
    }
    srand(time(NULL));
    Node *elem=(Node*)malloc(sizeof(Node));
    Node *temp=malloc(sizeof(Node));
    create_node(&elem,rand()%MAX);
    temp=elem;
    *pradzia=temp;
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        create_node(&elem,rand()%MAX);
        temp->next=elem;
        temp=temp->next;
    }
}
void print_element(int pos, Node *pradzia){
    Node *temp=pradzia;
    int i=1;
    while(i!=pos&&temp->next!=NULL){
        temp=temp->next;
        i++;
    }
    if(pos!=i){
        printf("tokios reiksmes nera\n");
    }
    else{
        printf("%d. reiksme=%d\n",i,temp->value);
    }
}
void delete_node(int pos,Node **pradzia){
    Node *temp=*pradzia,*prev;
    if(*pradzia!=NULL){
        int i=1;
        while(temp->next!=NULL&&i!=pos){
            prev=temp;
            temp=temp->next;
            i++;
        }
        if(i!=pos){
            printf("tokio elemento sarase nera\n");
        }
        else{
            printf("istrinamas %d.elementas %d\n",i,temp->value);
            if(pos==1){
               *pradzia=(*pradzia)->next;
            }
            else{
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
