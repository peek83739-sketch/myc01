#include <stdio.h>

#define SENPA printf("=========================================\n");
#define ROW_STD 5
#define COL_SUBJ 3

int main(){
    int stu_score[ROW_STD][COL_SUBJ]; 
    char subj_name[3][10] = {"MATH", "SCIENCE", "ENGLISH"};

    printf("==============SCORE TABLE===============");
    for(int x = 0; x < ROW_STD; x++){
        printf("Student No. %d:\n", x + 1);
        for(int y = 0; y < COL_SUBJ; y++){
            printf("%-10s :", subj_name[y]);
            scanf("%d", &stu_score[x][y]);
        }
        printf("\n");
    }
    printf("==============AVERAGE SCORE SUBJECT===============");
    for(int y = 0; y < COL_SUBJ; y++){
        int sum = 0;
        for(int x = 0; x < ROW_STD; x++){
            sum = sum + stu_score[x][y];
        }
        double avg = sum / ROW_STD;
        printf("%-10s : %lf\n", subj_name[y], avg);
    }

    SENPA

    return 0;
}