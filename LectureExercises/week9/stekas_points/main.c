#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct point{
    float x,y;
};
typedef struct point point;

struct Stack{
    point *arr;
    int size;
};
typedef struct Stack Stack;

point createPoint(double x, double y){
    point temp;
    temp.x=x;
    temp.y=y;
    return temp;
}

void initStack(Stack *stack){
    (*stack).arr=(point *)calloc((*stack).size,sizeof(point));
    for(int i=0;i<(*stack).size;i++){
        (*stack).arr[i]=createPoint(0,0);

    }
}

void printPoint(point p){
    printf("(%.1f,%.1f)\n",p.x,p.y);
}

void printStack(Stack stack){
    for(int i=0;i<stack.size;i++){
       printPoint(stack.arr[i]);
    }
}

int getStackSize(Stack *stack){
    return (*stack).size;
}

void push(Stack *stack, point value){
    (*stack).size++;
    point *temp=calloc((*stack).size,sizeof(point));
    for(int i=0;i<(*stack).size-1;i++){
        *(temp+i)=(*stack).arr[i];
    }
    *(temp+(*stack).size-1)=value;
    free((*stack).arr);
    (*stack).arr=temp;
}

point top(Stack *stack){
    return ((*stack).size>0?(*stack).arr[(*stack).size-1]:createPoint(0,0));
}

point pop(Stack *stack){
    point temp1=(*stack).arr[(*stack).size-1];
    (*stack).size--;
    point *temp=calloc((*stack).size,sizeof(point));
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

double getDistance(point a){
    return sqrt((a.x)*(a.x)+(a.y)*(a.y));
}

int main()
{   Stack stekas;
    stekas.size=0;
    initStack(&stekas);
    printStack(stekas);
    printf("steko dydis=%d\n\n",getStackSize(&stekas));
    push(&stekas,createPoint(1,2));
    push(&stekas,createPoint(2,3));
    push(&stekas,createPoint(4,5));
    push(&stekas,createPoint(6,7));
    push(&stekas,createPoint(7,8));
    printStack(stekas);
    for(int i=0;i<stekas.size;i++){
        printf("stekas.arr[%d]=%f\n",i,getDistance(stekas.arr[i]));
    }
    free(stekas.arr);
    return 0;
}
