#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int mid_score, final_score;
    scanf("%d %d", &mid_score, &final_score);

    if (mid_score >= 90){
        if (final_score >= 95){
            printf("100000");
        } else if (final_score >= 90){
            printf("50000");
        } else{
            printf("0");
        }
    } else {
        printf("0");
    }
    return 0;
}