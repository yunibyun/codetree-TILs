#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num[10];
    int val, sum_val;
    sum_val = 0;

    for (int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
        sum_val += num[i];
    }
    printf("%d", sum_val);

    return 0;
}