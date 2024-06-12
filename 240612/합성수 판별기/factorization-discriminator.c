#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool satisfied = false;
    scanf("%d", &n);

    // 2 이상 n-1 이하의 어떤 정수로 나누어 떨어지는지 확인하기 위해
    // 2부터 n-1까지의 iteration을 통해서 n % i == 0 인지 확인한다
    // n % i == 0 일 경우 satisfied의 값을 true로 바꾼다
    for (int i = 2; i <= n - 1; i++){
        if ( n % i == 0 ){
            satisfied = true;
        }
    }

    // satisfied의 값이 true라면 C, 아니면 N을 출력한다
    if ( satisfied == true ){
        printf("C");
    } else {
        printf("N");
    }
    
    return 0;
}