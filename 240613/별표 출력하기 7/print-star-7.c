#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

// 1. i의 초깃값을 0으로 두고, i가 n 미만일때만 실행되도록 하고 i가 매 loop마다 1씩 증가
// 2. j의 초깃값을 0으로 두고, j가 i 이하일때만 실행되도록 하고 j가 매 loop마다 1씩 증가
// 안쪽 for문에서는 *을 출력하고 바깥쪽에서는 줄바꿈

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}