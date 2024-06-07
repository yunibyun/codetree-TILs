#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i; i <= b; i += 1){
        if (a <= i && i % 2 == 1 && i <= b ){
            printf ("%d ", i);
        }
    }
    return 0;
}