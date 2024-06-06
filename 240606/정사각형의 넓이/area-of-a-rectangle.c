#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, area;
    scanf("%d", &n);
    area = n * n;
    printf("%d", area);

    if (n < 5) {
        printf("\ntiny");
    }
    return 0;
}