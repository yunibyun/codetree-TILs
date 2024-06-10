#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 변수 n 선언 (변수의 개수를 저장할 변수)
    int n;
    // 합계를 저장할 변수 sum 선언, 0으로 초기화
    int sum = 0;
    // 평균을 저장할 변수 average 선언
    double average;
    // 입력받을 자연수들을 저장할 변수 a 선언
    int a;

    // 변수 n의 값 입력받기
    scanf("%d", &n);

    // 1부터 n까지 iteration을 돌면서 변수 a를 입력받는다
    for (int i = 1; i <= n; i++){
        scanf("%d", &a);
        // sum에 각각 입력받은 a의 값을 더한다
        sum += a;
    } 

    // 평균을 계산한다
    average = (double) sum / n;
    // 합과 평균을 출력한다
    printf("%d %.1lf", sum, average);
    
    return 0;
}