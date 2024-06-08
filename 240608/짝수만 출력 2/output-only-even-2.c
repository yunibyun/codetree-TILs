#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int b, a;
    scanf("%d %d", &b, &a);
    int i = b;

    while ( i >= a ){
        if (i % 2 == 0){
            printf("%d ", i);
        }
        i--;
    }
    return 0;
}