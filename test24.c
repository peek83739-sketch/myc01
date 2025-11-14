#include <stdio.h>

void funA(int *x, int y, int *z){
    *x = 10;
    y = 20;
    *z = 30;
}

int main(){
    int a = 555;
    int b = 666;
    int c = 777;

    funA(&a, b, &c);
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);

    return 0;
}