#include<stdio.h>

int main()
{
    int amount,ten,a,five,b,two,c,one,total;
    printf("Enter the balance to given = ");
    scanf("%d",&amount);
    ten = amount/10;
    a = amount%10;
    five = a/5;
    b = a%5;
    two = b/2;
    c = b%2;
    one = c/1;
    total = ten + five + two + one;
    printf("\nNumber of ten rupee coin = %d",ten);
    printf("\nNumber of five rupee coin = %d",five);
    printf("\nNumber of two rupee coin = %d",two);
    printf("\nNumber of one rupee coin = %d",one);
    printf("\nTotal coins to be given = %d",total);

    return 0;
}
