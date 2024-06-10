#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int age;
    int cnt = 0;
    double average;
    int sum = 0;

    // 몇 번이 주어질지 모르므로 무한루프 사용
    while (1) {
        // 나이 입력 받기
        scanf("%d", &age);
        // 20대 미만이거나 30세 이상일 경우 for문에서 탈출
        if (age < 20 || age > 29 ){
            break;
        }

        // 20대일 경우 sum에 입력된 나이 더하고 count 올리기
        sum += age;
        cnt ++;
    }

    // 평균 나이 계산 후 출력
    average = (double) sum / cnt;
    printf("%.2lf", average);
    
    return 0;
}