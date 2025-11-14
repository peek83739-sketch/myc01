#include <stdio.h> 

#define SENPA printf("--------------------------------------\n");
#define EMP_NUM 5

int main(){

    double emp_sale[EMP_NUM], sum = 0, avg_sale;

    SENPA
    printf("        AVERAGE SALE\n");
    SENPA
    for(int x = 0; x < EMP_NUM; ++x){ //x++, x=x+1, x+=1
        printf("Employee no. %d/sale is:", x + 1);
        scanf("%lf", &emp_sale[x]);    
    }
    SENPA
    for(int x = 0; x < EMP_NUM; ++x){
        sum = sum + emp_sale[x];
    }
    
    avg_sale = sum / EMP_NUM;
    printf("Average sales is: %.2lf\n", avg_sale);

    return 0;
}
