#include <stdio.h>

double num1 = 555; // Global
double calSqueAreare(double num1, double num2);

double sumNumber(double num1, double num2){ // Parameter ถือว่าเป็นตัวแปรแบบ Local
    printf("%.2lf\n", num1); 
    return num1 + num2;
}

int main(){
    double area;    
    printf("%.2lf\n", num1); 
    printf("%.2lf\n", sumNumber(10, 20));
    printf("%.2lf\n", sumNumber(1000, 2000));
    printf("%.2lf\n", calSqueAreare(10, 20));

    area = calSqueAreare(10, 20);   
    printf("%.2lf\n", area); 

    return 0;
}

double calSqueAreare(double num1, double num2){
    printf("%.2lf\n", num1); 
    return num1 * num2;
}