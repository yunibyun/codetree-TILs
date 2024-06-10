#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    // 주어지는 두 수 a, b 변수 선언
    int a, b;
    // 모두 더한 값을 저장하는 변수 sum 선언, sum은 반드시 0으로 초기화!
    int sum = 0;
    // a, b 입력받기
    scanf("%d %d", &a, &b);

    // a와 b 중 대소관계 먼저 파악하기
    // 먼저 a가 b보다 크다면?
    if ( a >= b ){
        // b부터 시작해서 a까지 루프 돌리기
        for (int i = b; i <= a; i++){
            // 5의 배수인 수 찾기
            if ( i % 5 == 0 ){
                sum += i;
            }
        }
    } else if ( b >= a ){
        // b가 a보다 큰 경우
        // a부터 시작해서 b까지 루프 돌리기
        for (int i = a; i <= b; i++){
            // 5의 배수인 수 찾기
            if (i % 5 == 0){
                sum += i;
            }
        }
    } 

    // 총 합 출력하기
    printf("%d", sum);
    return 0;
}