#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *ptr,sum=0;

    printf("Enter the number of elements that you wanted to add in an array:\n");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));

    printf("Enter the Elements of an array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d:\n",i);
        scanf("%d",(ptr+i));
        sum = sum + *(ptr+i);
    }

    printf("The sum is %d",sum);


    return 0;

    
}


/*The diffrence is malloc is dynamically aloocated and calloc is allocated from initialising to 0*/