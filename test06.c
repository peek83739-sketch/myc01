//Global local Variable
#include "stdio.h" // หรือ <stdio.h>

int dataA = 100; //Global Variable
// const int  dataE = 5050; // Constant (ค่าคงที่) Global Variable

void showdata(){
    int dataB = 555; //Local Variable ใช้ได้เฉพาะ Code block อื่นๆ เท่านั้น

    printf("dataA = %d\n", dataA);
    printf("dataB = %d\n", dataB);
    
    // printf("dataC = %d\n", dataC); Error
}

int main(){
    int dataC = 999; //Local Variable ใช้ได้เฉพาะ Code block อื่นๆ เท่านั้น
    const int dataD = 1010; // constant Variable
    // dataD = 1010; Error

    dataC = 888;

    printf("dataA = %d\n", dataA);
    dataC = 777;
    printf("dataC = %d\n", dataC);
    // printf("dataB = %d\n", dataB); Error

    return 0;
}