#include<stdio.h>

int main()
{
    int number, positive;
    printf("Enter the number :");
    scanf("%d", &number);

    if (number<0)
    {
        positive = number * (-1);
        printf("%d", positive);
    }
    else
    {
        printf("%d", number);
    }

    return 0;
}
