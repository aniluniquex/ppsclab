#include<stdio.h>

int main(){

    int num1,num2,*result;
    printf("Enter the num1:\n");
    scanf("%d",&num1);
    printf("Enter the num2:\n");
    scanf("%d",&num2);
    result = findlarger(&num1,&num2);

    printf("The number %d is largest",*result);

    return 0;


}
int findlarger(int *a,int *b){
    if (*a>*b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
    
}