#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n;

    for (int i = 0; i < 100; i++){
        scanf("%d ", &arr[i]);
        if (arr[i] == 0){
            n = i;
            break;
        }
    }

    printf("%d", arr[n-1] + arr[n-2] + arr[n-3]);


    return 0;
}