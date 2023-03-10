#include<stdio.h>

int main(){
    float gross,a,b,c,d;/*a = basic, b = dearence, c = house rent*/
    printf("Welcome to Gross salary calculator!, \nEnter the basic salary : ");
    scanf("%f",&a);
    b=a*40/100;
    c=a*20/100;
    gross=a+b+c;
    printf("\nDearness allowence is : %0.2f",b);
    printf("\nHouse rent allowence is : %0.2f",c);
    printf("\nGross salary is : %0.2f",gross);
    return 0;

}
