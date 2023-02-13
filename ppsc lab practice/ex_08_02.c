#include<stdio.h>
int main(){
    char str1[50],str2[50];

    int i=0;

    printf("Enter the String1:\n");
    gets(str1);


    while (str1[i]!='\0')
    {
        str2[i] = str1[i];
        i++;
    }
    
    printf("The string 1 is : %s\n",str1);
    printf("The copied string string2 is: %s",str2);


    return 0;

}