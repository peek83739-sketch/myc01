// have parameter, have return
#include <stdio.h>

void funcB( char* name, int age );

void funcA( int a, int b ){
    funcB("Sombat", 20);
    printf("%d\n", a + b );
    funcB("Somjai", 35);
}

int main (){
    funcA( 10, 20 );
    return 0;
}

void funcB( char* name, int age){
    printf("Hello %s\n", name);
    printf("Your age is %d\n", age);
}