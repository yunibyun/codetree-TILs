#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    if ( n % 2 == 1 || n == 10 || n == 12 ){
        if ( n == 11 ){
            printf("30");
        } else {
            printf("31");
        }
    } else if ( n == 2 ){
        printf("28");
    } else {
        printf("30");
    }
    
    return 0;
}