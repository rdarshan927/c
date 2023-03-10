#include<stdio.h>

int main(){

    int a,b,c,d,e,f;
    printf("Hello World!, this is a simple program for adding and substracting two numners.");
    printf("\nEnter the number a : ");
    scanf("%d",&a);
    printf("\nEnter the number b : ");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("\nTotal of both number is : %d",c);
    printf("\nDifference of both number is : %d",d);
    printf("\nMultiplication of both number is : %d",e);
    printf("\nDivision of both number is : %d",f);
    return 0;
}
