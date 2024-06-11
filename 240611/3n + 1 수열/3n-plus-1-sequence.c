#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int cnt = 0;

    // 몇 번 루프가 필요한지 모르므로 무한루프를 사용한다
    while(1) {
        // n이 짝수인 경우 2로 나누고 cnt를 하나 올린다
        // n이 홀수인 경우 3을 곱하고 1을 더한다
        if ( n == 1 ){
            break;
        }
        else if ( n % 2 == 0 ){
            n = n / 2;
            cnt++;
        } else if ( n % 2 == 1 ){
            n = (n * 3) + 1;
            cnt ++;
        } 
    }

    // cnt를 출력한다
    printf("%d", cnt);
    return 0;
}