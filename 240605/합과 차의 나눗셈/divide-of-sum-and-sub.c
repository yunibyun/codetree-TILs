#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    double sum = a + b;
    double ded = a - b;
    printf("%.2lf", sum/ded);
    return 0;
}