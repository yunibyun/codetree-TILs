#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 입력받는 변수 선언
    // 세기 위한 변수 cnt 선언
        int cnt = 0;
        int n;

    // 첫 번째 줄에 짝수가 등장한 횟수 출력해야 함
    // 다섯 번 입력 받는건 for문으로 처리
    // 주어지는 수가 자릿수가 한 자리일수도, 두 자리일수도, 세 자리일수도 있는데 이걸 어떻게 확인하지?
    for (int i = 1; i <= 5; i ++){
        scanf("%d", &n);
            if (i == 1){
                if (n < 10){
                if ( n % 2 == 0 ) {
                    cnt++;
                    printf("%d", n)
                }
            } else if ( n < 100 ) {
                if ( n % 2 == 0 ) {
                    cnt ++;
                    n /= 10 
                    if ( n % 2 == 0){
                        cnt ++;
                    }
                    printf("%d", cnt);
                }
            }

        }

    }
    return 0;
}