#include <stdio.h>

#define showPa printf("------------------------------\n")

int main() {
    int num1, num2, sum;

    showPa;
    printf("        SUM NUMBER\n");
    showPa;

    do {
        printf("Enter number 1: ");
        scanf("%d", &num1);

        printf("Enter number 2: ");
        scanf("%d", &num2);

        sum = num1 + num2;
        printf("Sum of %d and %d is: %d\n", num1, num2, sum);

        showPa;
    } while (sum <= 999);

    return 0;
}
