#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // break는 if 와 같이 쓰이며, 해당 조건이 만족하는 경우에는 가장 가까이에 있는 for loop을 완전히 탈출
    // break는 조건문과 같이 쓰여야 함
    // break는 for, while 안에서만 사용이 가능

    // 정수 n 선언
    int n;
    // n 입력받기
    scanf("%d", &n);
    // 합을 저장할 변수 sum 선언, sum은 항상 0으로 초기화
    int sum = 0;

    // iteration을 통해서 1부터 차례대로 합을 구하기
    for (int i = 1; i <= 100; i++){
        // sum에다 i 하나씩 더하기
        sum += i;
        // 합이 n보다 커지면 for 문에서 나오도록 설계
        if (sum >= n) {
            // n 이상이 되는 순간에 더해진 숫자가 무엇인지 출력
            printf("%d", i);
            break;
        }
    }

    return 0;
}