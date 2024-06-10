#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 짝수가 아닌 경우에만 곱 구하기
    // 반복문에 continue 사용 - for와 while 안에서만 사용 가능
    // if와 같이 쓰이며 해당 조건이 만족하는 경우는 아래 코드를 더 이상 시행하지 않고 다시 위로 올라가 다음 for loop 시행
    // continue는 조건문과 같이 쓰여야 함

    // 변수 n 선언
    int n;
    // 개수를 세기 위한 cnt 변수 선언 ; cnt는 0으로 초기화
    int cnt = 0;
    // scanf로 n 입력 받기
    scanf("%d", &n);
    
    // for 문을 이용하여 1부터 n까지 iteration
    for (int i = 1; i <= n; i++){
        // 2, 3 혹은 5로 나누어 떨어지는 수 찾기
        if ( i % 2 == 0 || i % 3 == 0 || i % 5 == 0 ){
            continue;
        }
        cnt++;
    }

    // cnt 출력
    printf("%d", cnt);
    return 0;
}