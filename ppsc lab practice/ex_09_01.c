#include<stdio.h>
int main(){

    int num,result;

    printf("Enter a number:\n");
    scanf("%d",&num);

    result = prime(num);

    if (result==0)
    {
        printf("The number %d is a prime number",num);
    }
    else{
        printf("The number %d is not a prime number",num);
    }
    

    return 0;

}
int prime(int num){

    for (int i = 2; i < num/2; i++)
    {
        if(num%i!=0){
        continue;//continue statment is used to skip the value
        }
        
        else{

        return 1;
        }
    }


    return 0;
        
    }
    
