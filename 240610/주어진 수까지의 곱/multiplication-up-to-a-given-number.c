#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 변수 a와 b 선언
    int a, b;
    // 곱셈의 결과를 저장할 prod 변수 선언, 곱셈의 결과이므로 1로 초기화!
    int prod = 1;
    // a와 b를 유저로부터 입력받음
    scanf("%d %d", &a, &b);

    // a부터 b까지 iteration을 통해서 곱을 출력
    for ( int i = a; i <= b; i++ ){
        prod *= i;
    }

    // 곱의 결과 출력
    printf("%d", prod);
    return 0;
}