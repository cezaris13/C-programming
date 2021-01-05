#ifndef SARASAS_H_INCLUDED
#define SARASAS_H_INCLUDED
#include "sarasas.c"
// sarasai skaiciuojami nuo 1
void DeleteNodes(Node **list);
void PrintList(Node *head);
void CreateList(int n, Node **head);
void PrintElement(int pos, Node *head);
void DeleteNode(int pos, Node **head);
void InsertNode(int pos, int val, Node **head);
#endif // SARASAS_H_INCLUDED
