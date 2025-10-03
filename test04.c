#include <stdio.h>

int main(){

    //แสดงข้อมูลที่อยู่ใน "" แรกเท่านั้นทางหน้าจอ
    //แต่หากมีอะไรที่อยู่นอกเหนือจาก "" แรก 
    //ข้อมูลเหล่านั้นจะต้องถูกนำมาแสดงที่ "" แรกด้วย  Format spec./Format Code
    printf("AAA...%d ----- %s ^_^ %d\n", 111, "wow wow wow", 10 + 20);


    printf("AAA\nBBB\n\n\nCCC\tDDD\t\tCCC");



    return 0;
}