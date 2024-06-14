#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    // 첫 번째; n줄을 출력한다
    for (int i = 0; i < n ; i++){
        // 공백을 먼저 출력
        // 공백의 개수는 n - 1 - i개이므로
        for (int j = 0; j < n - 1 - i; j++){
            printf("  ");
        }

        // 문자의 개수를 출력한다
        // 문자의 개수는 i + 1
        for (int j = 0; j < i + 1; j++ ){
            printf("@ ");
        }
        printf("\n");
    }

    // 밑에 있는 문자 출력
    // 총 n - 1줄이므로
    for (int i = 0; i < n - 1; i++){
        // 아래에 있는 줄은 문자만 출력하면 된다
        // 문자의 개수는 n - 1 - i 개
        for (int j = 0; j < n - 1 - i; j++){
            printf("@ ");
        }
        printf("\n");
    }
    return 0;
}