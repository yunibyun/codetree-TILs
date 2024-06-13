#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    
    // 바깥의 for문 (총 행의 갯수)를 출력하고 줄바꿈을 함
    for ( int i = 0; i < n; i++ ){
        // 첫번째 nested for 문장; 왼쪽 직각삼각형을 출력함
        // n개에서 1개까지 줄이 바뀔 때마다 하나씩 줄어드는 형태
        // n - i 개의 별을 출력해야함
        for (int j = 0; j < n - i ; j++){
            printf("*");
        }

        // 2번째 nested for 문장
        // 중간에 공백 출력하기
        // i = 0일 때 공백 0개, 1일 때 2개, 2일 때 4개 (총 2i만큼 출력해야 함)
        for ( int j = 0; j < 2 * i; j++ ){
            printf(" ");
        }

        // 3번째 nested for 문장
        // 오른쪽에 직각삼각형 출력하기
        // n개에서 1개까지 줄이 바뀔 때마다 하나씩 줄어드는 형태로
        // n - i개의 별을 출력해야 함
        for (int j = 0; j < n - i; j++ ){
            printf("*");
        }

        printf("\n");
    }


    return 0;
}