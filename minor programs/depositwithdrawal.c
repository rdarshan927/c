#include<stdio.h>

int main()
{
    char transaction;
    int  bankBalance, amount;

    printf("Deposit = D/d\nWithdrawal = W/w\nEnter the first letter of transaction purpose as mentioned above :");
    scanf("%c", &transaction);

    printf("Enter the bank balance : ");
    scanf("%d", &bankBalance);


    if ((transaction == 'W') || (transaction == 'w'))
    {
        printf("You have selected to withdraw money\nEnter the amount to withdraw : ");
        scanf("%d", &amount);
        bankBalance = bankBalance - amount;
        printf("New bank balance = %d", bankBalance);

    }
    else if ((transaction == 'D') || (transaction == 'd'))
    {
        printf("You have selected to deposit money\nEnter the amount to deposit : ");
        scanf("%d", &amount);
        bankBalance = bankBalance + amount;
        printf("New bank balance = %d", bankBalance);
    }
    else
    {
        printf("You have selected an invalid transaction type");
    }

    return 0;
}
