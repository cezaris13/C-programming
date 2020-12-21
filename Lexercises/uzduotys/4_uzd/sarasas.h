#ifndef SARASAS_H_INCLUDED
#define SARASAS_H_INCLUDED
#include "sarasas.c"
void create_node(Node **list, int firstValue);
void delete_nodes(Node **list);
void Spausdinti_Sarasa(Node *pradzia);
void create_nodes(int n,Node **pradzia);
void print_element(int pos, Node *pradzia);
void delete_node(int pos,Node **pradzia);
#endif // SARASAS_H_INCLUDED
