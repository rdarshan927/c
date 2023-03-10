//Conditional operator statement
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value for A : ");
    scanf("%d",&a);
    printf("\nEnter the value for B : ");
    scanf("%d",&b);
    c=a<b?a:b;
    printf("\nThe lowest value is %d",c);

    return 0;
}
