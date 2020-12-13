#include <stdio.h>
#include <stdlib.h>
struct Stack{
    int *arr;
    int size;
};
typedef struct Stack Stack;
void initStack(Stack *stack){
    (*stack).arr=(int *)calloc((*stack).size,sizeof(int));
    for(int i=0;i<(*stack).size;i++){
        (*stack).arr[i]=0;
    }
}
void printStack(Stack stack){
    for(int i=0;i<stack.size;i++){
        printf("stack.arr[%d]=%d\n",i,stack.arr[i]);
    }
}
int getStackSize(Stack *stack){
    return (*stack).size;
}
void push(Stack *stack, int value){
    (*stack).size++;
    int *temp=calloc((*stack).size,sizeof(int));
    for(int i=0;i<(*stack).size-1;i++){
        *(temp+i)=(*stack).arr[i];
    }
    *(temp+(*stack).size-1)=value;
    free((*stack).arr);
    (*stack).arr=temp;
}
int top(Stack *stack){
    return ((*stack).size>0?(*stack).arr[(*stack).size-1]:0);
}
int pop(Stack *stack){
    int temp1=(*stack).arr[(*stack).size-1];
    (*stack).size--;
    int *temp=calloc((*stack).size,sizeof(int));
    for(int i=0;i<(*stack).size;i++){
        *(temp+i)=(*stack).arr[i];
    }
    free((*stack).arr);
    (*stack).arr=temp;
    return temp1;
}
void destroyStack(Stack *stack){
    initStack(stack);
}
int main()
{   Stack stekas;
    stekas.size=20;
    initStack(&stekas);
    printStack(stekas);
    printf("steko dydis=%d\n\n",getStackSize(&stekas));
    push(&stekas,102);
    push(&stekas,1200);
    push(&stekas,112);
    push(&stekas,122);
    printStack(stekas);
    printf("steko dydis=%d\n\n",getStackSize(&stekas));
    printf("virsutine reiksme=%d\n",top(&stekas));
    printf("virsutine reiksme=%d\n\n",pop(&stekas));
    printStack(stekas);
    printf("isvalymas \n");
    destroyStack(&stekas);
    printStack(stekas);
    free(stekas.arr);
    return 0;
}
