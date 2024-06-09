#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    int i = a;
    while ( i <= b ) {
        printf("%d ", i);
        if ( i % 2 == 1 ){
            i *= 2;
        } else {        
            i += 3;
        }
    }
    return 0;
}