#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 문제; 2의 거듭제곱수 중 하나인 N을 입력받아, N=2 x를 만족하는 x 값을 구하는 코드
    int n;
    scanf("%d", &n);
    int cnt = 0;

    // 2로 나눈 나머지가 0이면 계속 루프를 통해서 2로 나누고
    // n이 1이 되면 break를 통해서 루프를 빠져나온다
    while (true) {
        if ( n % 2 == 0){
            n /= 2;
            cnt++; 
        } else if ( n == 1 ){
            break;
        }
    }

    printf("%d", cnt);
    return 0;

}