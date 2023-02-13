#include<stdio.h>
int main(){

    int n,i,j=0,k=0;

    printf("Enter The Number Of Elements In an Array:\n");
    scanf("%d",&n);

    int arr[n],odd[n],even[n];

    printf("Enter The Elements:\n");
    for ( i = 0; i < n; i++)
    {
        printf("Enter The %d element :",i);
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            even[k] = arr[i];
            k++;
        }
        else
        {
            odd[j] = arr[i];
            j++;
        }
        
        
    }
    printf("Odd numbers : \n");
    for (i = 0; i < j; i++)
    {
        printf(" %d ",odd[i]);
    }
    printf("\n Even numbers : \n");
    for (i = 0; i < k; i++)
    {
        printf(" %d ",even[i]);
    }
    

    
    
    return 0;

}