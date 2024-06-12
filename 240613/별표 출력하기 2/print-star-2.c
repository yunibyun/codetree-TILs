#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

// 세로줄 (행) 의 갯수는 n개이므로 바깥 반복문은 1부터 n까지!
// 혹은 0에서 n개 미만으로 해도 된다
for (int i = 1; i <= n; i++){
    // 가로줄 (열) 에서 별은 i의 갯수가 늘어감에 따라서 줄어들어야 한다
    // 여기선 n개에서 하나씩 줄어들였지만 이렇게 해도 됨
    /*
    for (int j = 0; j < n - i; j++){
        printf("* ")
    } 
    */
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