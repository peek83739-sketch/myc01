#include <stdio.h>

int main(){

    int dataA;
    int *p_dataA = &dataA;

    dataA = 10;

    // แสดง address ของ dataA 
    printf("Address of A is : %p\n", &dataA);
    printf("Address of A is : %d\n", &dataA);
    printf('%p\n', p_dataA);
    printf('%d\n', p_dataA);
    
    // แสดงค่าที่อยู่ใน dataA
    printf("Value A %d\n", dataA);
    printf("Value A %d\n", *p_dataA);

    printf("Address of p_dataA is : %p\n", &p_dataA);
    *p_dataA = 999;
    printf("Value dataA %d\n", dataA);
    printf("Value dataA %d\n", *p_dataA);

    return 0;
}
