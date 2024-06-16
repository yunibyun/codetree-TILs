#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int cnt = 0, sum = 0;
    double average;

    for (int i = 0; i < 10; i++){
        scanf("%d ", &arr[i]);
        if (arr[i] == 0){
        break;
        }
        sum += arr[i];
        cnt++;
    }

    average = (double) sum / cnt;
    printf("%d %.1lf", sum, average);
    return 0;
}