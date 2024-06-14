#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 0; i < 2 * n; i++){
        // i가 0일때 혹은 짝수일 때
        // 별은 n - 1개로 출력
        if (i == 0 || i % 2 == 0){
            for (int j = 0; j < n - ( i / 2); j++){
                printf("* ");
            } 
        } else if ( i % 2 == 1 ){
            for (int j = 0; j < ((i - 1) / 2) + 1 ; j++)
                printf("* ");            
        }
        printf("\n");
    }
    return 0;
}