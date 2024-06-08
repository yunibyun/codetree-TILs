#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int i = 1;
    scanf("%d", &n);

    while ( n >= i ) {
        if ( i % 3 == 0 ){
            printf("%d ", i);
        }
        i += 1;
    }
    return 0;
}