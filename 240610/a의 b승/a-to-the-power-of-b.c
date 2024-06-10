#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 입력받을 자연수 a, b 변수 선언
    int a, b;
    // 곱셈의 결과를 저장할 prod 변수 선언, 곱이므로 1로 초기화
    int prod = 1;
    // a와 b 유저로부터 입력받기
    scanf("%d %d", &a, &b);
    // for문을 통해서 1부터 b까지 iteration
    for ( int i = 1; i <= b; i++ ){
        // prod에 a를 곱한다
        prod *= a;
    }

    // a를 b번 곱한 값을 출력한다
    printf("%d", prod);
    return 0;
}