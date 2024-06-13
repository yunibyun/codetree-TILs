#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    // 높이가 n인 삼각형이므로 0부터 n까지 바깥 for 문 작성
    for ( int i = 0; i < n; i++ ){
        // 공백은 총 i개 출력한다
        for ( int j = 0; j < i; j++ ){
            printf("  ");
        }
        // 별은 총 2n - 2i - 1 개 만큼 찍는다
        for ( int j = 0; j < (2 * n) - ( 2 * i ) - 1; j++ ){
            printf("* ");
        }
        printf("\n");
    }

    for ( int i = n - 2; i >= 0; i--){
            // 공백은 총 i개를 출력한다
            for (int j = 0; j < i; j++ ){
                printf("  ");
            }

            // 별은 총 2n - 2i - 1개 출력한다
            for (int j = 0; j < (2 * n ) - (2 * i) - 1; j++ ){
                printf("* ");
            }
            printf("\n");
    }

    return 0;
}