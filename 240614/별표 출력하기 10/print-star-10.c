#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    // 일단 n행만큼을 출력해야하므로
    for (int i = 0; i < 2 * n; i++){
        // i가 짝수일 경우 (홀수줄) 
        if (i == 0 || i % 2 == 0){
            for (int j = 0; j < 1 + (i / 2); j++)
                printf("* ");
        } else if ( i % 2 == 1 ){
            for (int j = 0; j < n - ((i - 1) / 2); j++){
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}