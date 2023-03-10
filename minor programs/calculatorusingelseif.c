#include<stdio.h>

int main()
{
    float number1, number2, outPutNumber;
    char symbol;

    printf("Addition = +\nSubtraction = -\nMultiplication = *\nDivision = /\nEnter the operation to be performed as mentioned above :");
    scanf("%c", &symbol);

    if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
    {
        printf("Enter number 01 : ");
        scanf("%f", &number1);
        printf("Enter number 02 : ");
        scanf("%f", &number2);

        if (symbol == '+')
        {
            outPutNumber = (number1 + number2) * 1.0;
        }
        else if (symbol == '-')
        {
            outPutNumber = (number1 - number2) * 1.0;
        }
        else if (symbol == '*')
        {
            outPutNumber = number1 * number2 * 1.0;
        }
        else
        {
            outPutNumber = number1 / number2 * 1.0;
        }
        printf("The naswer is %.2f", outPutNumber);
        }
    else
    {
        printf("The operator you had entered is invalid");
    }

    return 0;
}
