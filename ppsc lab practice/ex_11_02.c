#include<stdio.h>
int main(){

    int num1,num2,num3;


    printf("Enter The Value Of num1:\n");
    scanf("%d",&num1);
    printf("Enter The Value of num2:\n");
    scanf("%d",&num2);
    // printf("Enter the value of num3:\n");
    // scanf("%d",&num3);

    printf("The numbers before swapping are:\n num 1:%d\nnum2:%d",num1,num2);
    printf("\n");
    swap(&num1,&num2,&num3);
    printf("The numbers after swapping are :\n num 1:%d\nnum2:%d",num1,num2);




}
void swap(int *a,int *b,int *c){
    *c = *a;
    *a = *b;
    *b = *c;

}