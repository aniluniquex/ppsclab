#include<stdio.h>
int main(){

    int choice;
    float radius,side,base,height,length,width;
    float areaofcircle,areaofsquare,areaoftriangle,areaofrectangle;

    printf("enter the choice:");
    scanf("%d",&choice);

    if (choice==1)
    {   
        printf("Enter The radius:");
        scanf("%f",&radius);
        areaofcircle = 3.14 *(radius*radius);
        printf("The area Of Circle is %f",areaofcircle);
    }
    else if (choice==2)
    {
        printf("Enter The Side Of a Square:\n");
        scanf("%f",&side);
        areaofsquare = side * side;
        printf("The area of the square is %f",areaofsquare);

    }
    else if (choice==3)
    {
        printf("Enter The Base and Height Of A triangle:\n");
        scanf("%f%f",&base,&height);
        areaoftriangle = 0.5*(base*height);
        printf("The Area Of Triangle is %f",areaoftriangle);

    }
    else if (choice==4)
    {
        printf("Enter The length and Width Of a Rectangle");
        scanf("%f%f",&length,&width);
        areaofrectangle = length * width;
        printf("The Area Of Rectangle is %f",areaofrectangle);

    }
    
    
    return 0;
    
}