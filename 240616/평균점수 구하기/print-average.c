#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double arr[8];
    double sum = 0;
    double avg;

    for (int i = 0; i < 8; i++){
        scanf("%lf ", &arr[i]);
        sum += arr[i];
    }

    avg = (double) sum / 8;
    printf("%.1lf", avg);

    return 0;
}