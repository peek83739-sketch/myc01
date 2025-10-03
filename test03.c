//เขียนโปรแกรมแสดงข้อความ IoT-SAU
//แสดงผลการคำนวณของ 2 ยกกำลัง 500

//"" double quote, ' ' single quote. # hash, / slash, \ back slash
// {} curly bracket, ( ) square bracket, ( round bracket, <> angle bracket
//: colon,; semicolon, backtick (Alt+9+6) | pipe, & ampersand

#include <stdio.h> //หรือ "stdio.h"
#include "math.h"

//การกำหนดค่าคงที่ คือ การสร้างตัวแทนเพื่อมาเก็บข้อมูลใดๆ โดยที่ไม่สามารถเปลี่ยนค่าข้อมูลนั้นได้
//และสามารถเอาตัวแทนที่สร้างไปใช้ในโปรแกรมได
#define showline printf("++++++++++++++++++++++\n");
#define SMILE "^_____^ 5555"

int main(){
    showline
    printf("IoT-SAU\n");
    showline
    showline
    printf("%lf\n", pow(2, 10) );
    printf("%s\n", SMILE );
    showline

    return 0;
}
