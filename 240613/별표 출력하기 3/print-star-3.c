#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    // 바깥 for문 (총 행의 갯수): 0에서 n개 미만
    for ( int i = 0 ; i < n; i++ ){
        // 공백 먼저 출력
        for (int j = 0 ; j < i ; j++){
            printf("  ");
        }
        // 별을 출력한다!
        for (int j = 0; j < (2 * n) - (2 * i) - 1; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}