#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;

    // 주어지는 정수값이 25가 나올때까지 계속 입력을 받기 위해 무한루프 사용
    while(1){
        scanf("%d\n", &n);
        if (25 < n){
            printf("Lower\n");
        } else if (n < 25) {
            printf("Higher\n");
        } else if ( n == 25 ) {
            printf("Good");
            break;
        }
    }
    return 0;
}