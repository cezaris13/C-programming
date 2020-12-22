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

void CreateNode(int firstValue, Node **list){
    Node *temp = malloc(sizeof(Node));
    temp->value = firstValue;
    temp->next = NULL;
    *list = temp;
}

void DeleteNodes(Node **list){
    Node *temp = *list;//priskiriam saraso elemento head
    while (*list != NULL){
       *list = (*list)->next;//pajudam i sekanti elementa
       printf("Istriname %d\n", temp->value);
       free(temp);//atlaisvinam pries tai buvusi
       temp = *list;//priskiriam curr elemento reiksme
    }
}

void PrintList(Node *head){
    int i = 1;
    printf("*****************************************\n");
    printf("Spausdiname sarasa:\n");
    Node *curr = head;
    if(head != NULL){
        while(curr != NULL){
            printf("%d.elementas=%d\n",i,curr->value);
            i++;
            curr = curr->next;
        }
    }
    else{
        printf("saraso nera\n");
    }
    printf("*****************************************\n");
}

void CreateList(int n, Node **head){
    if(n<1){//jei jo dydis mazenis uz nuli reiskias nebus sukuriamas vienpusis sarasas, apie tai pranesama vartotojui
        printf("Ivestas permazas dydis, sarasas nebuvo sukurtas\n");
        return;
    }
    srand(time(NULL));
    Node *elem;//elementas kuriame bus sukuriamos naujos reiskmes saraso
    Node *temp;// laikinas vienpusio saraso talpinimas
    CreateNode( rand() % MAX, &temp );
    *head = temp;//issaugojam i head pradini temp strukturos elementa t.y. saraso head
    if(n == 1){//jei reikejo saraso is 1 elemento tai stabdom
        return;
    }
    for(int i = 0; i < n - 1; i++){//uzpildomas sarasas
        CreateNode( rand() % MAX, &elem);
        temp->next = elem;
        temp = temp->next;
    }
}

void PrintElement(int pos, Node *head){
    Node *temp = head;
    int i = 1;
    while(i != pos&&temp->next != NULL){//sukam cikla kol nepasiekiam pabaigos ir  i nera lygu pos
        temp = temp->next;
        i++;
    }
    if(pos != i){// jei pasibaigus ciklui nera i== pos reiskias toks elementas su pozicija pos neegzistuoja
        printf("tokios reiksmes nera\n");
    }
    else{
        printf("%d. reiksme=%d\n", i, temp->value);//priesingu atveju spausdinam jo reiksme
    }
}

void DeleteNode(int pos, Node **head){
    Node *temp = *head, *prev;
    if(*head != NULL){// tikrinam ar sarasas nera tuscias
        int i = 1;
        while(temp->next != NULL && i != pos){//sukam kol nepasiekem pabaigos ir kol nerandam reikiamo elemento
            prev = temp;
            temp = temp->next;
            i++;
        }
        if(i != pos){//jei pasibaigus ciklui i nera lygu pos reiskias pasibaige sarasas ir tokio elemento nera
            printf("tokio elemento sarase nera\n");
        }
        else{
            printf("istrinamas %d.elementas %d\n",i,temp->value);//radom toki elementa ir ji istrinam
            if(pos == 1){//jei pirmas tai reikia tiesiog head nukirpti sitaip
               *head = (*head)->next;
            }
            else{//o jei kazkur kitur tai sujungiam pries elementa esanti nari su sekanciu ir atlaisivan norimo istrinti elemento atminti
                prev->next = temp->next;
            }
            free(temp);
        }
    }
    else{
        printf("tuscias sarasas negalima trinti nieko\n");
    }
}

void InsertNode(int pos, int val, Node **head){
    Node *temp = *head, *prev, *elem;
    CreateNode( val, &elem);
    if(*head != NULL){// tikrinam ar sarasas nera tuscias
        int i = 1;
        while(temp->next != NULL && i != pos){//sukam kol nepasiekem pabaigos ir kol nerandam reikiamo elemento
            prev = temp;
            temp = temp->next;
            i++;
        }
        if(i != pos){//jei pasibaigus ciklui i nera lygu pos reiskias pasibaige sarasas ir tokio elemento nera
            printf("tokio elemento sarase nera\n");
        }
        else{
            printf("iterpiamas elementas \n");
            if(pos == 1){//jei pirmas tai reikia tiesiog head nukirpti sitaip
               elem->next = temp;
               *head = elem;
            }
            else if(temp->next == NULL){
                temp->next = elem;
            }
            else{//o jei kazkur kitur tai sujungiam pries elementa esanti nari su sekanciu ir atlaisivan norimo istrinti elemento atminti
                elem->next = temp;
                prev->next = elem;
            }
        }
    }
    else{
        printf("tuscias sarasas negalima trinti nieko\n");
    }
}
#endif // filec
