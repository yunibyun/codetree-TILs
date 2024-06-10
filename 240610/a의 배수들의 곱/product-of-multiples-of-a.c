#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    // 변수 a, b 선언
    int a, b;
    // 곱을 저장할 변수 prod 선언, 항상 1로 초기화
    int prod = 1;
    // 유저에게 a, b값 입력 받기
    scanf("%d %d", &a, &b);

    // for문을 통해서 1부터 b까지 iteration
    for ( int i = 1; i <= b; i++ ){
        // a의 배수일 경우 prod에 곱해준다
        if ( i % a == 0 ){
            prod *= i;
        }
    }

    // 1부터 b까지의 수 중 a의 배수들의 곱을 출력한다
    printf("%d", prod);
    return 0;
}