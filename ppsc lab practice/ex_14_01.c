#include<stdio.h>

struct complex
{
    float real;
    float imaginary;
};

struct complex add(struct complex a,struct complex b){
    struct complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary +b.imaginary;
    return c;
}

int main(){
    struct complex a,b,c;

    printf("Enter Real and Imaginary Part Of first Complex number:\n");
    scanf("%f%f",&a.real,&a.imaginary);

    printf("Enter Real and Imaginary Part Of Second Complex number:\n");
    scanf("%f%f",&b.real,&b.imaginary);

    c = add(a,b);

    printf("Sum of the complex numbers: %.1f + %.1fi\n", c.real, c.imaginary);
    
}
