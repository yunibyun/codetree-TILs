#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    int num;

    // i가 1부터 10까지 loop
    for (int i = 1; i <= 10; i++){
        // scanf 10번 실행
        scanf("%d", &num);
        // num이 홀수인지 확인
        if ( num % 2 == 1 ){
            // 홀수일 경우 cnt 1개 증가
            cnt++;
        }
    }

    // 홀수의 개수 출력
    printf("%d", cnt);
    return 0; 
}