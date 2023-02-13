#include<stdio.h>
int main(){

    int x1,y1,x2,y2;

    float distance;

    printf("enter the values of x1,y1,x2,y2");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

    distance = ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));


    printf("The distance between the two points is %f",distance);


    return 0;


}