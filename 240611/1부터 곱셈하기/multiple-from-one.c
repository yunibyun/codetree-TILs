#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 변수 n 선언
    int n;
    // 곱을 저장하는 변수 prod 선언, 값 1로 초기화
    int prod = 1;
    // 변수 n 입력받기
    scanf("%d", &n);
    // 1부터 10까지 for 문을 이용하여 iteration
    for ( int i = 1; i <= 10; i++ ){
        prod *= i;
        // 곱이 n 이상이 되면 순간에 곱해진 숫자 출력
        if ( prod >= n ){
            printf("%d", i);
            break;
        }
    }

    return 0;
}