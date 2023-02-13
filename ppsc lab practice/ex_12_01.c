#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,*p,max;

    printf("Enter the size of n:\n");
    scanf("%d",&n);

    p = (int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d Element:\n",i);
        scanf("%d",p+i);
    }

    max = *p;

    for (int i = 0; i < n; i++)
    {
        if (*(p+i)>max)
        {
            max = *(p+i);
        }
        
    }

    printf("The largest Element in the array is %d",max);

    return 0;

    free(p);
    
    
}