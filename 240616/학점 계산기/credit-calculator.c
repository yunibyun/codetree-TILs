#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0;
    // int[n] 식으로는 선언 불가
    // n은 상수가 아니라 변할 수 있는 변수이기 떄
    double arr[5];
    scanf("%d\n", &n);
    double sum = 0;
    double grade;

    // 학점 입력 받기
    for ( int i = 0; i < n; i++ ){
        scanf("%lf ", &arr[i]);
        sum += arr[i];
        cnt++;
    }

    grade = (double) sum / cnt;
    printf("%.1lf\n", grade);

    if (grade >= 4.0){
        printf("Perfect");
    } else if ( grade >= 3.0 && grade < 4.0 ){
        printf("Good");
    } else {
        printf("Poor");
    }

    return 0;
}