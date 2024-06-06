#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int h, w;

    scanf("%d %d", &h, &w);
    int b = (10000 * w) / (h * h);
    printf("%d", b);
    if (b >= 25) {
        printf("\nObesity");
    }
    return 0;
}