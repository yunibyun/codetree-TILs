#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 주어질 정수 a 선언
    int a;
    // 변수의 합을 저장할 sum 변수 선언, 변수의 갯수를 셀 cnt 변수 선언; 항상 0으로 초기화
    int sum = 0, cnt = 0;
    // 평균을 저장할 average 변수 선언;
    double average;

    // 총 10개의 변수를 받기 위해 iteration 돌리기
    for (int i = 1; i <= 10; i++){
        // 변수 입력받기
        scanf("%d", &a);
        //  0이상 200이하의 정수들의 경우 cnt 증가시키고 값 더하기
        if ( 0 <= a && a <= 200 ){
            sum += a;
            cnt ++;
        }
    }

    // average 계산
    average = (double) sum / cnt;
    // 합과 평균 출력
    printf("%d %.1f", sum, average);

    return 0;
}