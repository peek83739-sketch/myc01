// รับค่าชื่่อ-สกุลอายุ เงินเดือน แล้วแสดงออกมา

#include <stdio.h>
#define showline printf("---------------------------------------\n");

int main()
{
    char fullname[50]; //%s, %[^\n]
    int age;           //%d
    float salary;      //%f

    showline
        printf("    Profile Informatino     \n");
    showline
        printf("Enter your fullname: ");
    scanf("%[^\n]", &fullname);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your salary: ");
    scanf("%f", &salary);
    showline
        printf("Hello %s\n", fullname);
    printf("you are %d years old, \n", age);
    printf("you salary is %.2f baht.\n", salary);
    showline

        return 0;
}