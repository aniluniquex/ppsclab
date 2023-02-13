#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[50];
    char *p;
    int vowels=0,consonent=0;

    printf("enter a string:\n");
    gets(str);


    p = str;

    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
        {
            vowels++;
        }
        else
        {
            consonent++;
        }
        p++;

        

}

    printf("The number of vowels in a string is %d\n",vowels);
    printf("The number of Consonants in a string is %d\n",consonent);


    return 0;
}