#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    char operator;
    double first, second;
    printf("Enter the Operator (+, -, *, /) = ");
    scanf("%c", &operator);

    printf("Enter the first numbers = ");
    scanf("%lf", &first);

     printf("Enter the second numbers = ");
    scanf("%lf",&second);

    switch (operator)
    {
    case '+':
        printf("%lf + %lf = %lf", first, second, (first + second));
        break;

    case '-':
        printf("%lf - %lf = %lf", first, second, (first - second));
        break;

    case '*':
        printf("%lf * %lf = %lf", first, second, (first * second));
        break;

    case '/':
        if (second != 0.0)
            printf("%lf / %lf = %lf", first, second, (first / second));
        else
            printf("Divide By Zero Situation");
        break;

    default:
        printf("Invalid Operator");
        break;
    }

    return 0;
}
