#include<stdio.h>
int main(){
    int x = 10;

    printf("The address of %d is %d\n",x,&x);
    printf("The value at address is %d",*(&x));

    return 0;

}