#ifndef SORTS_H_INCLUDED
#define SORTS_H_INCLUDED
#include "sorts.c"

void copy(int *arr,int *arr2,int size);
int swap(int *a,int *b);
void printArray(int data[],int size);
void generateArray(int data[], int size, int low, int high);
int isSorted(int data[],int size);
void bubbleSort(int data[],int size);
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high,int size);
void insertionSort(int arr[], int n);
void selectionSort(int arr[], int n);
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
int showMenu(char *menuTitle, char *menuOptions[], int menuSize, int *vals);
void printReport(char *alg, clock_t t);
#endif // SORTS_H_INCLUDED
