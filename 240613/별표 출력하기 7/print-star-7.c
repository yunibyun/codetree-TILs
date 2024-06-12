#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

// 1. i의 초깃값을 0으로 두고, i가 n 미만일때만 실행되도록 하고 i가 매 loop마다 1씩 증가
// 2. j의 초깃값을 0으로 두고, j가 i 이하일때만 실행되도록 하고 j가 매 loop마다 1씩 증가
// 안쪽 for문에서는 *을 출력하고 바깥쪽에서는 줄바꿈
    /*
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    */

    // 세로줄 (행) 은 총 n개이므로 바깥쪽 for loop은 0부터 n 미만
    // 가로줄 (열) 에서는 i보다 1개 더 출력해야 하므로
    // e.g) i = 0일 때 별은 1개 출력 
    // i = 1일 때 별은 2개 출력...
    // 안쪽 for 문은 j < i + 1까지 출력한다

    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < i + 1; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}