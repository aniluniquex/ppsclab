#include<stdio.h>


int main(){

    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;

    printf("Enter The Number Of rows:\n");
    scanf("%d",&r);

    printf("Enter the Number Of Colomns:\n");
    scanf("%d",&c);

    printf("Enter The Elements Of First Matrix:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);

        }
        
    }
    printf("Enter The Elements Of second Matrix:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d",&b[i][j]);

        }
        
    }
    printf("For Multiplication Of The Matrix:\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for ( k = 0; k < c; k++)
            {
                mul[i][j] +=a[i][k]*b[k][j];
            }
            
        }
        
    }
    printf("Printing The Matrix:\n");
    for ( i = 0; i < r; i++)
    {
        for (j  = 0; j < c; j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;


    
}