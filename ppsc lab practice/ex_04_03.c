#include<stdio.h>
int main(){
    
    int sum = 0;
    int num,r,temp;
    
    printf("Enter a number:\n");
    scanf("%d",&num);
    
    temp = num;
    for(;num!=0;num=num/10){
        r = num%10;
        sum = sum +(r*r*r);
        
    }
    if(sum==temp){
        printf("amstrong number");
    }
    else{
        printf("not amstrong");
    }
    return 0;
}
