#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("Enter the five marks :\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    avg=total/5;
    printf("\nTotal of the entered marks is %d", total);
    printf("\nAverage of the entered marks is %f", avg);

    return 0;
}
