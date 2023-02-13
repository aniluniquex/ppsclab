#include<stdio.h>
int main(){

    int a[100], n, c=0;

    printf("Enter the Number Of Elements you Wanted To Add in An array:\n");
    scanf("%d",&n);
    printf("Enter The %d elements Of an array:\n",n);

    for (int i = 0; i < n; i++)
    {
        printf("element %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("The unique Elements are:\n");

    
    for (int i = 0; i < n; i++)
    {

        c=0;
        for (int j = 0; j < n; j++)
        {
            if (i!=j)
            {
                if (a[i]==a[j])
                {
                    c++;
                }
                
            }
            
        }
        if (c==0)
        {
            printf("%d ",a[i]);
        }
        
        
    }
    
    



}