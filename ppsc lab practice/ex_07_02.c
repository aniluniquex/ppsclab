#include<stdio.h>
#include<string.h>

void rev(char *name){

    int i,len,temp;

    len = strlen(name);

    for (i = 0; i < len/2; i++)
    {
        temp = name[i];
        name[i] = name[len-i-1];
        name[len-i-1] = temp;
    }
    

}



int main(){

    char str[50];

    printf("Enter a string:\n");
    gets(str);

    printf("String Before Reversing is %s\n",str);

    
    rev(str);
    printf("String After Reversing is : %s",str);


    return 0;

}