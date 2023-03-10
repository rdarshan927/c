#include<stdio.h>

int main()
{
    int year;
    printf("This program is to check wether the year is Leap year or not \nEnter the year : ");
    scanf("%d",&year);
    if(year%100==0)
        if (year%400==0)
            printf("\nThis year is a leap year");
        else
            printf("\nThis year isn't a leap year");
    else
        if(year%4==0)
            printf("\This year is a leap year");
        else
            printf("\nThis year isn't a leap year");

    return 0;
}
