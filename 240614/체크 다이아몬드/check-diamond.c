#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    // 윗줄의 삼각형 출력하기
    // 총 n줄임
    for (int i = 0; i < n; i++){
        // 공백을 먼저 출력한다
        // 갯수는 n - i - 1개
        for (int j = 0; j < n - i - 1; j++){
            printf(" ");
        }

        // 별을 출력한다
        // 갯수는 i + 1개
        for (int j = 0;  j <  i + 1; j++){
            printf("* ");
        }
        printf("\n");
    }


    // 아랫줄의 삼각형 출력하기
        for (int i = 0; i < n - 1; i++){
            // 공백 출력하기
            // 공백의 개수는 i + 1개
            for (int j = 0; j < i + 1; j++){
                printf(" ");
            }

            // 별 출력하기
            // 별의 개수는 n - i - 1개
            for (int j = 0; j < n - i - 1; j++){
                printf("* ");
            }

            printf("\n");
        }
    return 0;
}