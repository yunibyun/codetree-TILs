#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    // 항상 행은 n개이므로 0 <= i < n 까지 iteration
    for (int i = 0; i < n; i++ ){
        // 공백의 갯수는 n - i - 1개
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
            printf(" ");
        }
        // 별의 개수 출력하기
        // 별의 개수는 2 * i + 1 개이므로
        for (int j = 0; j < 2 * i + 1; j++){
            printf("* ");
        }           
        printf("\n");
    }


    
    return 0;
}