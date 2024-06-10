#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    // 입력받을 두 개의 정수 a와 b를 초기화한다
    int a, b;
    // 합을 저장할 변수 sum과 평균을 저장할 변수 average, 그리고 갯수를 셀 cnt 변수를 초기화한다
    int sum = 0, cnt = 0;
    double average = 0;

    // 변수 a와 b를 입력받는다
    scanf("%d %d", &a, &b);

    // for 문을 이용하여 a부터 b까지의 수를 loop을 돌린다
    for (int i = a; i <= b; i++){
        // 5의 배수일 경우
        if (i % 5 == 0){
            // 합을 추가시키고 cnt를 하나 추가한다
            sum += i;
            cnt ++;
        } else if ( i % 7 == 0 ){
            // 7의 배수일 경우도 합을 추가시키고 cnt를 하나 추가한다
            sum += i;
            cnt ++;
        }
    }

    // 평균값을 구한다
    average = (double)  sum  / cnt;
    // 합과 평균값을 출력한다- 평균값은 소수 첫째 자리까지 출력
    printf("%d %.1lf", sum, average);
    return 0;
}