// No parameter - no return
#include <stdio.h>

void funcB();
void funcC();

void funcA(){
    printf("Hey......\n");
    funcC();
}

int main(){
    funcA();
    funcA();
    funcB();
    return 0;
}

void funcB() { printf("Hi......\n"); }

void funcC() { printf("Hello......\n"); }
