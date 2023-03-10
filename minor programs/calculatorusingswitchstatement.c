#include<stdio.h>

int main()
{
    float number1, number2, outPutNumber;
    char symbol;

    printf("Addition = +\nSubtraction = -\nMultiplication = *\nDivision = /\nEnter the operation to be performed as mentioned above : ");
    scanf("%c", &symbol);
    printf("Enter number 01 : ");
    scanf("%f", &number1);
    printf("Enter number 02 :");
    scanf("%f", &number2);

    switch(symbol)
    {
        case '+': outPutNumber = (number1 + number2) * 1.0;
                  printf("Answer is : %.2f", outPutNumber);
                  break;

        case '-': outPutNumber = (number1 - number2) * 1.0;
                  printf("Answer is : %.2f", outPutNumber);
                  break;

        case '*': outPutNumber = (number1 * number2) * 1.0;
                  printf("Answer is : %.2f", outPutNumber);
                  break;

        case '/': outPutNumber = (number1 / number2) * 1.0;
                  printf("Answer is : %.2f", outPutNumber);
                  break;

        default : printf("The operator you had entered is invalid");
                  break;
    }
    return 0;
}
