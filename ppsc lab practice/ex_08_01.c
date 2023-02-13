#include<stdio.h>
int main(){

    char str1[100],str2[100];

    printf("Enter String 1 :\n");
    gets(str1);
    printf("Enter String 2:\n");
    gets(str2);

    int i = 0;
    while (str1[i]==str2[i] && str1[i]!='\0')
    {
        i++;
    }
    if (str1[i]>str2[i])
    {
        printf("Str1>str2\n");
    }
    else if (str1[i]<str2[i])
    {
        printf("str1<str2");
    }
    else if (str1[i]==str2[i])
    {
        printf("Both strings are Equal");
    }
    
    
    return 0;
    
}