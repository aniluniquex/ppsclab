#include<stdio.h>
int main(){

    int p,q,r,s;

    printf("enter the values of p q r s : \n");
    scanf("%d%d%d%d",&p,&q,&r,&s);

    if (r>0 && s>0 && p%2==0 && q>r && s>p && (r+s)>(p+q))
    {
        printf("correct values");
    }

    else
    {
        printf("Wrong Values");
    }
    
    
}