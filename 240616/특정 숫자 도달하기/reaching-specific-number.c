#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int num[10];
    int sum = 0, cnt = 0;
    double average;
    
    // 일단 10개의 숫자 입력받기
    for (int i = 0; i < 10; i++){
        scanf("%d ", &num[i]);
    }

    for( int i = 0; i < 10; i ++ ){
                if ( num[i] >= 250 ){
                    break;
                } else {
                sum += num[i];
                cnt++;
            }
        }

    average = (double) sum / cnt;
    printf("%d %.1f", sum, average);
    return 0;
}