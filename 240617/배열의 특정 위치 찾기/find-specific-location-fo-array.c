#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    double average;
    int sum_even = 0, sum_3_mtp = 0;
    // 10개의 정수를 입력받아요

    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        if (i % 2 == 1){
            sum_even += arr[i];
        }
        
        if (i == 2 || i == 5 || i == 8){
            sum_3_mtp += arr[i];
        }
    }

    average = (double) sum_3_mtp / 3;
    printf("%d %.1lf", sum_even, average);
    return 0;
}