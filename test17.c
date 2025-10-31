// no parameter, have return
#include <stdio.h>

double funcC();

int funcA(){
    printf("Hi....\n");
    return 500; //literal data-raw data
}

int main(){
    double wow;
    printf("%d\n", funcA());
    wow = funcC();
    
    return 0;
}

double funcC(){
    printf("Hey......\n");
    return 10 * 20.5; //expresion 
}