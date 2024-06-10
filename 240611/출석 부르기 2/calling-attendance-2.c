#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    // 출석번호가 100개까지 주어지므로 100번 iteration 돌리면 충분
    for (int i = 1; i <= 100; i++){
        scanf("%d\n", &n);
        if ( n == 1 ){
            printf("John\n");
        } else if ( n == 2 ) {
            printf("Tom\n");
        } else if ( n == 3 ) {
            printf("Paul\n");
        } else if ( n == 4 ) {
            printf("Sam\n");
        } else {
            printf("Vacancy");
            break;
        }
    }
    return 0;
}