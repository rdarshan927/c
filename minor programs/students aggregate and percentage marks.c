#include<stdio.h>

int main()
{
    float sb1,sb2,sb3,sb4,sb5,ag,pr;
    printf("Enter the marks of the 01st subject : ");
    scanf("%f",&sb1);
    printf("\nEnter the marks of the 02nd subject : ");
    scanf("%f",&sb2);
    printf("\nEnter the marks of the 03rd subject : ");
    scanf("%f",&sb3);
    printf("\nEnter the marks of the 04th subject : ");
    scanf("%f",&sb4);
    printf("\nEnter the marks of the 05th subject : ");
    scanf("%f",&sb5);
    ag=sb1+sb2+sb3+sb4+sb5;
    pr=ag/5;
if  sb1 <= 100:
    printf("\nThe Aggregate marks of the student is : %0.1f",ag);
    printf("\nThe Percentage marks of the student is : %0.1f",pr);
else:
        printf("\nEntered marks is invalid")
        return 0;
}
