#include<stdio.h>
int main(){

    int x,y; //integers
    int *a,*b,sum;

    printf("Enter the Value Of x and y\n");
    scanf("%d%d",&x,&y);

    a = &x;
    b = &y;

    sum = *a+*b;

    printf("The sum is %d",sum);


    return 0;


}