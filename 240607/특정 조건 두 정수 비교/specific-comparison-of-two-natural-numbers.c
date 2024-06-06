#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    if ( a < b ){
        printf("1 0");
    } else if ( a == b ){
        printf("0 1");
    }
    return 0;
}