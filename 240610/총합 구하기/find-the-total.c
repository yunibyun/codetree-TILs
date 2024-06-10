#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 입력받을 변수 a, b 선언
    int a, b;
    // 총 합을 저장할 변수 sum 선언, 0으로 초기화
    int sum = 0;
    // a와 b를 입력받는다
    scanf("%d %d", &a, &b);
    
    // a부터 b까지 iteration을 통해서 문제의 조건에 맞는 수를 찾는다
    for ( int i = a; i <= b; i++ ){
        // 6의 배수인 수 찾기
        if ( i % 6 == 0 ){
            // 8의 배수가 아닌 수
            if (i % 8 != 0) {
                // 는 sum에 더한다
                sum += i;
            }
        }
    }
    
    // a 이상 b 이하의 수 중 문제의 조건에 맞는 수들의 합을 출력한다
    printf("%d", sum);
    return 0;
}