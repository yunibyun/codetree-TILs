#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum = 0;
    // 총 10개의 정수를 입력받아요
    for (int i = 0; i <10; i++){
        scanf("%d ", &arr[i]);
        // 만약 index 값이 2, 4, 9일 경우 sum 변수에다 더해요
        if (i == 2 || i == 4 || i == 9){
            sum += arr[i];
        }
    }

    // sum 변수를 출력해요
    printf("%d", sum);
    return 0;
}