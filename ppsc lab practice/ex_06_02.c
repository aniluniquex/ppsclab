// c program to find transpose of a matrix
#include<stdio.h>
int main(){

    int a[10][10],b[10][10],r,c,i,j;

    printf("Enter The Number Of rows:\n");
    scanf("%d",&r);

    printf("Enter the Number Of Colomns:\n");
    scanf("%d",&c);

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("Element [%d] [%d] is : \n",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("The matrix is :\n");
    for ( i = 0; i < r; i++)
    {
        printf("\n");
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);

        }
        
    }
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
        
    }
    printf("\n");
    printf("The transpose of a matrix is : \n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",b[i][j]);

        }
        printf("\n");
        
    }
    
    
    
    return 0;

}