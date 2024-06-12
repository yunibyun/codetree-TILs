#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool satisfied = true;
    scanf("%d", &n);

    // 소수인지 판명하기 위해서 2부터 n - 1까지 iteration을 돌린다
    // 만약에 n % i == 0일 경우는 조건을 만족하지 않으므로 satisfied의 값을 false로 한다
    for ( int i = 2; i <= n - 1 ; i++) {
        if ( n % i == 0 ){
            satisfied = false;
        }
    }
    
    if (satisfied == true){
        printf("P");
    } else {
        printf("C");
    }
    return 0;
}