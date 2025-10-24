#include <stdio.h>

#define Pa printf("------------------------------------\n");

int main(){
    int number, result;
    int i;
    
    Pa
    printf("        Multiplication Table\n");
    Pa
    printf("Enter number : ");
    scanf("%d", &number);

    for(i = 1 ; i <= 12; i = i + 1 ){ // ++i, i+, i+= 1
        result = number * i;
        printf("%d x %d = %d\n", number, i, result);
    }

    Pa
    
    return 0;
}