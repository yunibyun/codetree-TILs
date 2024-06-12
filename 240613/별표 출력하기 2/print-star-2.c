#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

// i는 1부터 2, 3, 4, 5까지 증가
for (int i = 1; i <= n; i++){
    // j는 5, 4, 3, 2, 1 까지 감소
    for (int j = n; i <= j ; j--){
        printf("* ");
    }
    printf("\n");
}

/* 
다른 방법 풀이 (이중 for문인데 조금 다르게 풀기)
1. i의 초기값 0, i가 n 미만일 때 실행되도록 하고 i가 매 for loop마다 1씩 증가
2. j의 초기값 0, j가 n-i 미만일 때만 실행되도록 하고 j가 매 for loop마다 1씩 증가
안쪽 for문의 각 for loop마다 * 을 출력하고
바깥 for문의 각 for loop마다 줄을 바꾸기

for (int i = 0; i < n; i++){
    for int (j = 0; j < n - i; j++) {
        printf("* ");
    }
    printf("\n");
}
*/
    return 0;
}