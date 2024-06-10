#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    
    // 입력받을 변수 a와 b 선언
    int a, b;
    // 합을 저장할 변수 cnt 선언, cnt는 항상 0으로 초기화
    int cnt = 0;
    // a와 b를 입력받기
    scanf("%d %d", &a, &b);

    // a부터 b까지 루프 돌리기
    for (int i = a; i <= b; i++){
        // 짝수이면 cnt에 i를 더하기
        if (i % 2 == 0){
            cnt += i;
        }
    }

    // cnt 출력
    printf("%d", cnt);
    return 0;
}