#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int area = n * n;
    printf("%d", area);

    if (n < 5) {
        printf("tiny");
    }
    return 0;
}