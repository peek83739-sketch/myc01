#include <stdio.h>

//สร้าง Structure
typedef struct {
    char name [20];
    int id;
    int age;
    float score;
} Sau; //ชื่อ Structure แบบที่เรียกว่า Alias Name

int main(){
    Sau dataA;
    Sau dataD = {"Sombat", 1, 20, 99.99};

    printf("%.2f\n", dataD.score); // => 99.99
    dataD.id = 654568789;
    
    return 0;
}

