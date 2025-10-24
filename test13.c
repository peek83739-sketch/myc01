#include <stdio.h>

int main()
{
    int number;

    printf("Even & Odd Number Program\n");

    while (1)
    { // infinite loop
        printf("Enter number (0 to exit): ");
        scanf("%d", &number);

        if (number <= 0)
        {
            break; // exit the loop if number <= 0
        }

        if (number % 2 == 0)
        {
            printf("Number is even.\n");
        }
        else
        {
            printf("Number is odd.\n");
        }
    }

    return 0;
}
