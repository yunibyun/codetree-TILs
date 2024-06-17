#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 정수 n을 입력받아요
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int arr[100];
        int mtp_2[100];

        // n개의 정수를 입력받아요
        for (int j = 0; j < n; j++){
            scanf("%d ", &arr[j]);
        }

		for (int j = n - 1; 0 <= j; j--){
			if(arr[j] % 2 == 0){
			printf("%d ", arr[j]);
			}
		}
    }
    
    return 0;
}