#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for ( int i = n; i > 0; i -= 1){
        printf("%d ", i);
    }
    return 0;
}