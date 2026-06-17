#include <stdio.h>

void add(int a, int b)
{
    printf("Addition of %d and %d is: %d\n", a, b, a + b);
}

void sub(int a, int b)
{
    printf("Subtraction of %d and %d is: %d\n", a, b, a - b);
}

void mul(int a, int b)
{
    printf("Multiplication of %d and %d is: %d\n", a, b, a * b);
}

void divide(int a, int b)
{
    if (b != 0)
        printf("Division of %d and %d is: %d\n", a, b, a / b);
    else
        printf("Division by zero is not possible.\n");
}

void mod(int a, int b)
{
    if (b != 0)
        printf("Modulus of %d and %d is: %d\n", a, b, a % b);
    else
        printf("Modulus by zero is not possible.\n");
}

int main()
{
    int choice, num1, num2;

    do
    {
        printf("\n===== ARITHMETIC CALCULATOR =====\n");
        printf("Press 1 for Addition\n");
        printf("Press 2 for Subtraction\n");
        printf("Press 3 for Multiplication\n");
        printf("Press 4 for Division\n");
        printf("Press 5 for Modulus\n");
        printf("Press 0 for Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
        {
            printf("Enter first number: ");
            scanf("%d", &num1);

            printf("Enter second number: ");
            scanf("%d", &num2);
        }

        switch (choice)
        {
            case 1:
                add(num1, num2);
                break;

            case 2:
                sub(num1, num2);
                break;

            case 3:
                mul(num1, num2);
                break;

            case 4:
                divide(num1, num2);
                break;

            case 5:
                mod(num1, num2);
                break;

            case 0:
                printf("Program Exited.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 0);

}