#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // 정수 n을 입력받아요
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int arr[100];
	 	scanf("%d ", &arr[i]);

		// 거꾸로 (n-1)번째 index부터 arr 배열을 iteration 해요
		for (int j = n - 1; j >= 0; j--){
			// arr[j] 가 짝수일 경우 값을 출력해요
			if(arr[j] % 2 == 0){
			printf("%d ", arr[j]);
			}
		}
    }
    
    return 0;
}