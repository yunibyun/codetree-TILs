#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d, e;

    scanf("%d", &a);
    scanf("%d %d %d %d", &b, &c, &d, &e);

    printf("%d", a > b);
    printf("\n%d", a > c);
    printf("\n%d", a > d);
    printf("\n%d", a > e);

    return 0;
}