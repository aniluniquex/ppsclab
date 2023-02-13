#include<stdio.h>
int main(){

    int num1,num2,sum;

    printf("enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    addtwonumbers(&num1,&num2,&sum);

    printf("The sum Of two numbers is %d",sum);
}

void addtwonumbers(int *a,int *b,int *result){
    *result = *a + *b;
    return *result;
}