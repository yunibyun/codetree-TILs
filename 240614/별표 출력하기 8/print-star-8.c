#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    // 총 n줄이므로
    for (int i = 0; i < n; i++){
        // 홀수번째 줄에는 별이 하나만 출력된다 (i = 0이거나 짝수일 경우)
        if (i == 0 || i % 2 == 0){
            printf("*");
        } else if ( i % 2 == 1 ) {
            // i가 홀수일 경우 (짝수번째 줄에는 i + 1만큼의 별이 출력된다)
            for (int j = 0; j < i + 1; j++){
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}