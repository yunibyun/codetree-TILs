#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int math_score_a, eng_score_a, math_score_b, eng_score_b;
    scanf("%d %d", &math_score_a, &eng_score_a);
    scanf("%d %d", &math_score_b, &eng_score_b);

    if ( math_score_a > math_score_b){
        printf("A");
    } else if ( math_score_b > math_score_a){
        printf("B");
    } else if ( math_score_a == math_score_b){
        eng_score_a > eng_score_b ? printf("A"): printf("B");
    }
    return 0;
}