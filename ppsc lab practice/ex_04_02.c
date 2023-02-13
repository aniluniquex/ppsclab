//harmonic series
#include<stdio.h>
int main(){

    float sum = 0.0;
    int i,n;

    printf("Enter The Value Of n:\n");
    scanf("%d",&n);

    printf("The first %d Terms Of Harmonic Series are: ",n);

    for (i = 1; i <= n; i++)
    {
        printf("1/%d + ",i);
        sum = sum + 1.0/i;


    } 
    printf("\b\b  \n");
    printf("The sum of the first %d terms of the harmonic series is: %.4f\n", n, sum);
    
}