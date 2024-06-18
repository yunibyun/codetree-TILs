#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum_odd = 0, sum_even = 0;

    // 10개의 숫자를 입력받아요
    for (int i = 0; i < 10; i++){
        scanf("%d" , &arr[i]);
    }

    for ( int i = 0; i < 10; i++ ){
        if (i % 2 == 0 || i == 0){
            sum_odd += arr[i];
        } else if ( i % 2 == 1 ){
            sum_even += arr[i];
        }
    }

    if (sum_odd > sum_even){
        printf("%d", sum_odd - sum_even);
    } else if (sum_even > sum_odd){
        printf("%d", sum_even - sum_odd);
    }
    return 0;
}