#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int cnt = 0;

    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++){
        if (arr[i] != 0){
            cnt++;
        } else {
                break;
            } 
        }

    for (int i = (cnt - 1); i >= 0; i--){
        printf("%d ", arr[i]);
    }
    
    return 0;
}