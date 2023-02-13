// factorial of a number
#include<stdio.h>
int main(){

    int number,i;
    int factorial = 1;
    printf("Enter a Number:\n");
    scanf("%d",&number);

    if (number<0)
    {
        printf("Factorial Is Not Possible For Negative Numbers");
    }
    else{
        for (i = 1; i <=number; i++)
        {
            factorial = factorial * i;
        }
        printf("Factorial Of a Number is %d",factorial);
        
    }
    
    return 0;

}