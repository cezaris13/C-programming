#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct point{
    float x,y;
};
typedef struct point point;
void printPoint(point p){
    printf("(%.1f,%.1f)\n",p.x,p.y);
}
point createPoint(double x, double y){
    point temp;
    temp.x=x;
    temp.y=y;
    return temp;
}
double getDistance(point a, point b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int main()
{
    point p1,p2;
    p1=createPoint(2.0,3.0);
    p2=createPoint(4.0,5.0);
    printPoint(p1);
    printPoint(p2);
    printf("atstumas tarp p1 ir p2=%f\n",getDistance(createPoint(2.0,3.0),createPoint(4.0,5.0)));
    return 0;
}
