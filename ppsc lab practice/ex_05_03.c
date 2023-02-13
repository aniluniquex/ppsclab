#include<stdio.h>
int main(){
    int n,temp=0;
    int arr[50];
    
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("Element %d:",i);
        scanf("%d",&arr[i]);
        
    }
    printf("Elements before sorting :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
     for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
    printf("\n");
    printf("Elements after sorting are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
    
}