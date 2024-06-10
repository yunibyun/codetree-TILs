#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 변수 n 선언
    int n;
    scanf("%d", &n);

    // for문을 통해 1부터 n까지 iterate
    for (int i = 1; i <= n ; i++){
        // i가 2로 나누어 떨어지거나, 일의 자리가 5이거나, 3으로 나누어 떨어지면서 9로는 나누어 떨어지지 않을 때
        if ( i % 2 == 0 || (i % 10 == 5) || (i % 3 == 0 && i % 9 != 0)) {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}